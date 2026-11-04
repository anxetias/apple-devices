// rea decompile_all
// name: __AMAuthInstallMonetLocalCreateEDBLDownloadDigestData
// address: 0x2957f9
// body: available
// range: 0x2957f9-0x295ab1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallMonetLocalCreateEDBLDownloadDigestData
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  CC_LONG CVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  uchar *puVar11;
  CC_LONG aCVar12 [2];
  undefined8 uStack_110;
  undefined1 local_108 [216];
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  uStack_110 = 0x20;
  if (iVar1 != 0x3b0e1) {
    if (((((iVar1 == 0x7f0e1) || (iVar1 == 0xe50e1)) || (iVar1 == 0x1440e1)) ||
        ((iVar1 == 0x1720e1 || (iVar1 == 0x19f0e1)))) || (iVar1 == 0x1fe0e1)) {
LAB_00295875:
      uStack_110 = 0x30;
    }
    else if (((iVar1 != 0x9540e1) && (iVar1 != 0x7f50e1)) && (iVar1 != 0x9210e1)) {
      if (iVar1 == 0x2af0e1) goto LAB_00295875;
      uStack_110 = 0x14;
    }
  }
  local_108._208_8_ = param_4;
  uVar6 = _CFGetAllocator(param_1);
  lVar7 = _CFDataCreateMutable(uVar6,uStack_110);
  if (lVar7 == 0) {
    uStack_110 = 2;
    goto LAB_00295a34;
  }
  _CFDataSetLength(lVar7,uStack_110);
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  if (iVar1 == 0x3b0e1) {
LAB_00295916:
    lVar8 = _CFDataGetBytePtr(param_2);
    uVar2 = *(uint *)(lVar8 + 4);
    _CC_SHA256_Init((CC_SHA256_CTX *)local_108);
    lVar9 = 2;
    do {
      uVar3 = *(uint *)(lVar8 + lVar9 * 4);
      *(uint *)(local_108 + lVar9 * 4) =
           uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 10);
    local_108._4_4_ = 0;
    local_108._0_4_ = uVar2;
    pvVar10 = (void *)_CFDataGetBytePtr(param_3);
    CVar5 = _CFDataGetLength(param_3);
    _CC_SHA256_Update((CC_SHA256_CTX *)local_108,pvVar10,CVar5);
    puVar11 = (uchar *)_CFDataGetMutableBytePtr(lVar7);
    _CC_SHA256_Final(puVar11,(CC_SHA256_CTX *)local_108);
  }
  else if (((((iVar1 == 0x7f0e1) || (iVar1 == 0xe50e1)) || (iVar1 == 0x1440e1)) ||
           ((iVar1 == 0x1720e1 || (iVar1 == 0x19f0e1)))) ||
          ((iVar1 == 0x1fe0e1 || (iVar1 == 0x2af0e1)))) {
    lVar8 = _CFDataGetBytePtr(param_2);
    _AMAuthInstallLog(6,"_AMAuthInstallMonetLocalCreateEDBLDownloadDigestData",
                      "partialDigests384->codeBytesHashed = %d",*(undefined4 *)(lVar8 + 4));
    aCVar12[1] = 0;
    aCVar12[0] = *(uint *)(lVar8 + 4);
    _CC_SHA384_Init((CC_SHA512_CTX *)local_108);
    lVar9 = 2;
    do {
      uVar4 = *(ulong *)(lVar8 + -8 + lVar9 * 8);
      *(ulong *)(local_108 + lVar9 * 8) =
           uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
           (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 10);
    local_108._8_8_ = 0;
    local_108._0_8_ = aCVar12;
    pvVar10 = (void *)_CFDataGetBytePtr(param_3);
    CVar5 = _CFDataGetLength(param_3);
    _CC_SHA384_Update((CC_SHA512_CTX *)local_108,pvVar10,CVar5);
    puVar11 = (uchar *)_CFDataGetMutableBytePtr(lVar7);
    _CC_SHA384_Final(puVar11,(CC_SHA512_CTX *)local_108);
  }
  else {
    if (((iVar1 == 0x7f50e1) || (iVar1 == 0x9540e1)) || (iVar1 == 0x9210e1)) goto LAB_00295916;
    lVar9 = _CFDataGetBytePtr(param_2);
    __SHA1Partial_Init(lVar9 + 8,*(undefined4 *)(lVar9 + 4),(CC_SHA1_CTX *)local_108);
    pvVar10 = (void *)_CFDataGetBytePtr(param_3);
    CVar5 = _CFDataGetLength(param_3);
    _CC_SHA1_Update((CC_SHA1_CTX *)local_108,pvVar10,CVar5);
    puVar11 = (uchar *)_CFDataGetMutableBytePtr(lVar7);
    _CC_SHA1_Final(puVar11,(CC_SHA1_CTX *)local_108);
  }
  uVar6 = _CFRetain(lVar7);
  *(undefined8 *)local_108._208_8_ = uVar6;
  uStack_110 = 0;
LAB_00295a34:
  _SafeRelease(lVar7);
  return uStack_110;
}

