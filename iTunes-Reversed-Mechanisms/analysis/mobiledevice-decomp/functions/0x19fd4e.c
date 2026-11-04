// rea decompile_all
// name: _AMAuthInstallApCopyDescription
// address: 0x19fd4e
// body: available
// range: 0x19fd4e-0x19ff0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApCopyDescription(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  
  uVar2 = _CFGetAllocator();
  uVar2 = _CFStringCreateMutable(uVar2,0x40);
  _CFStringAppend(uVar2,&cf__);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar9 = "YES";
    pcVar5 = "YES";
    if (*(char *)(param_1 + 0x39) == '\0') {
      pcVar5 = "NO";
    }
    pcVar6 = "YES";
    if (*(char *)((long)puVar1 + 0x14) == '\0') {
      pcVar6 = "NO";
    }
    pcVar7 = "YES";
    if (*(char *)((long)puVar1 + 0x51) == '\0') {
      pcVar7 = "NO";
    }
    pcVar11 = "YES";
    if (*(char *)(puVar1 + 9) == '\0') {
      pcVar11 = "NO";
    }
    pcVar8 = "YES";
    if (*(char *)((long)puVar1 + 0x52) == '\0') {
      pcVar8 = "NO";
    }
    pcVar12 = "YES";
    if (*(char *)(puVar1 + 0xc) == '\0') {
      pcVar12 = "NO";
    }
    pcVar10 = "YES";
    if (puVar1[0xf] == 0) {
      pcVar10 = "NO";
    }
    if (puVar1[0x10] == 0) {
      pcVar9 = "NO";
    }
    _CFStringAppendFormat
              (uVar2,0,&
                       cf_personalize__s__ecid_0x_llx_chipid_0x_x_boardid_0x_x_secDom__d_isProduction__s_EPRO__s_isSecure__s_ESEC__s_img4__s_demotionPolicy____managedBaaCert__s_slowRollBaaCert__s_dpoc___
               ,pcVar5,puVar1[0xd],*puVar1,*(undefined4 *)(puVar1 + 1),
               *(undefined4 *)((long)puVar1 + 0xc),*(undefined4 *)(puVar1 + 2),pcVar6,pcVar7,pcVar11
               ,pcVar8,pcVar12,puVar1[0xb],pcVar10,pcVar9,puVar1[0x18]);
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      uVar3 = _CFGetAllocator(param_1);
      uVar3 = __CopyHexStringFromData(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
      _CFStringAppendFormat(uVar2,0,&cf__nonce_0x__,uVar3);
      _CFRelease(uVar3);
      lVar4 = *(long *)(param_1 + 0x10);
    }
    if (*(long *)(lVar4 + 0x30) != 0) {
      uVar3 = _CFGetAllocator(param_1);
      uVar3 = __CopyHexStringFromData(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
      _CFStringAppendFormat(uVar2,0,&cf__sepNonce_0x__,uVar3);
      _CFRelease(uVar3);
    }
  }
  _CFStringAppend(uVar2,&cf__);
  return uVar2;
}

