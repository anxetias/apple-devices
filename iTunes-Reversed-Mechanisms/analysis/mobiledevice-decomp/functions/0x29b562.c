// rea decompile_all
// name: _AMAuthInstallRembrandtMeasureBootPSI
// address: 0x29b562
// body: available
// range: 0x29b562-0x29b955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x29b951 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_AMAuthInstallRembrandtMeasureBootPSI
          (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  void *data;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  CC_LONG len;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_180;
  undefined4 local_174;
  undefined8 local_170;
  long local_168;
  long local_160;
  long local_158;
  int local_150;
  CC_LONG local_14c;
  CC_SHA512_CTX local_108;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar5 = 0;
  uStack_180 = 1;
  local_158 = param_1;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar11 = 0;
    if (param_3 == 0) goto LAB_0029b87a;
    local_170 = param_5;
    local_168 = param_3;
    lVar5 = _CFDataGetBytePtr(param_2);
    uVar8 = *(uint *)(lVar5 + 0x10);
    uVar1 = *(uint *)(lVar5 + 0x14);
    uVar9 = (ulong)*(uint *)(lVar5 + 0x24);
    uVar2 = *(uint *)(lVar5 + 0x28);
    local_160 = param_2;
    uVar6 = _CFDataGetLength();
    lVar12 = local_168;
    uVar7 = local_170;
    iVar3 = *(int *)(*(long *)(local_158 + 0x30) + 4);
    if (iVar3 == 0x60) {
      if (uVar1 < uVar6) {
LAB_0029b629:
        if (uVar2 < uVar6) {
          if (uVar6 == uVar8) {
            uVar8 = iVar3 - 0x5e;
            if (uVar8 < 0xb) {
              iVar4 = (uint)(iVar3 != 0x68 && iVar3 != 0x5e) * 0x10;
              len = ((iVar4 + uVar2) -
                    (iVar4 + uVar2 + 0x24 & ((uint)(iVar3 == 0x68 || iVar3 == 0x5e) << 6 | 0x3f))) -
                    0x5c;
              if ((0x284U >> (uVar8 & 0x1f) & 1) == 0) {
                if ((0x401U >> (uVar8 & 0x1f) & 1) == 0) goto LAB_0029b8b3;
                lVar5 = _CFStringCompare(&cf_PSI2_PartialDigest,local_170,0);
                if (lVar5 == 0) {
LAB_0029b789:
                  _AMAuthInstallLog(6,"AMAuthInstallRembrandtMeasureBootPSI",
                                    "Using SHA256 to hash %@",param_4);
                  goto LAB_0029b7a4;
                }
                lVar5 = _CFStringCompare(&cf_RestorePSI2_PartialDigest,uVar7,0);
                if (lVar5 == 0) goto LAB_0029b789;
                _AMAuthInstallLog(6,"AMAuthInstallRembrandtMeasureBootPSI","Using SHA384 to hash %@"
                                  ,param_4);
                data = (void *)_CFDataGetBytePtr(local_160);
                _CC_SHA384_Init(&local_108);
                _CC_SHA384_Update(&local_108,data,len);
                lVar5 = 2;
                do {
                  auVar13 = pshufb(*(undefined1 (*) [16])(local_108.count + lVar5),_DAT_00336dc0);
                  *(undefined1 (*) [16])(&local_158 + lVar5) = auVar13;
                  lVar5 = lVar5 + 2;
                } while (lVar5 != 10);
                local_150 = uVar2 - len;
                local_14c = len;
                uVar7 = _CFGetAllocator(local_158);
                lVar11 = _CFDataCreate(uVar7,&local_150,0x48);
                lVar12 = local_168;
              }
              else {
LAB_0029b7a4:
                uVar7 = _CFDataGetBytePtr(local_160);
                __SHA256Partial(uVar7,len,local_108.count + 1);
                local_108.count[0]._0_4_ = uVar2 - len;
                local_108.count[0]._4_4_ = len;
                uVar7 = _CFGetAllocator(local_158);
                lVar11 = _CFDataCreate(uVar7,&local_108,0x28);
              }
              if (lVar11 != 0) {
                _CFDictionarySetValue(lVar12,local_170,lVar11);
                lVar5 = _CFDataGetBytePtr(local_160);
                local_174 = *(undefined4 *)(lVar5 + 0x1000);
                uStack_180 = 0;
                _AMAuthInstallLog(6,"AMAuthInstallRembrandtMeasureBootPSI","%@: version=0x%x",
                                  param_4);
                uVar7 = _CFGetAllocator(local_158);
                lVar5 = _CFNumberCreate(uVar7,3,&local_174);
                if (lVar5 == 0) {
                  uStack_180 = 2;
                  lVar5 = 0;
                }
                else {
                  _CFDictionarySetValue(lVar12,param_4,lVar5);
                }
                goto LAB_0029b87a;
              }
            }
            else {
LAB_0029b8b3:
              _AMAuthInstallLog(3,"AMAuthInstallRembrandtMeasureBootPSI","Unknown chipid");
            }
            _AMAuthInstallLog(3,"AMAuthInstallRembrandtMeasureBootPSI","%s CFDataCreate failed");
            uStack_180 = 2;
            goto LAB_0029b8ec;
          }
          pcVar10 = "size %d != sizeToMeasure %lld";
          uVar9 = (ulong)uVar8;
        }
        else {
          pcVar10 = "signature_offset %d >= sizeToMeasure %lld";
          uVar9 = (ulong)uVar2;
        }
      }
      else {
        pcVar10 = "gpuk_offset %d >= sizeToMeasure %lld";
        uVar9 = (ulong)uVar1;
      }
    }
    else {
      if (uVar9 < uVar6) goto LAB_0029b629;
      pcVar10 = "gpuk2_offset %d >= sizeToMeasure %lld";
    }
    _AMAuthInstallLog(3,"AMAuthInstallRembrandtMeasureBootPSI",pcVar10,uVar9,uVar6);
    uStack_180 = 0;
  }
LAB_0029b8ec:
  lVar5 = 0;
  lVar11 = 0;
LAB_0029b87a:
  _SafeRelease(lVar11);
  _SafeRelease(lVar5);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uStack_180;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

