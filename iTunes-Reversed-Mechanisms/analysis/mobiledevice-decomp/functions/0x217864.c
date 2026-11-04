// rea decompile_all
// name: ACFUDataContainer::copyData
// address: 0x217864
// body: available
// range: 0x217864-0x2179b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUDataContainer::copyData() */

undefined8 ACFUDataContainer::copyData(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  ulong in_RSI;
  ACFUDataContainer *in_RDI;
  ulong local_80;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  void *local_28;
  
  if (in_RDI[0x18] != (ACFUDataContainer)0x1) {
    if (*(long *)in_RDI != 0) {
      _AMSupportSafeRetain();
      return *(undefined8 *)in_RDI;
    }
    copyData(0,in_RSI);
    return 0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (&local_38,"");
  if (*(__CFString **)(in_RDI + 0x10) == (__CFString *)0x0) {
    uVar4 = ACFULogging::getLogInstance();
    pcVar6 = "%s::%s: file path has not been initialized\n";
LAB_00217951:
    uVar3 = 0;
    ACFULogging::handleMessage(uVar4,2,pcVar6,"ACFUDataContainer","copyData");
  }
  else {
    ACFUCommon::stringFromCFString((ACFUCommon *)&local_50,*(__CFString **)(in_RDI + 0x10));
    if ((local_38 & 1) != 0) {
      operator_delete(local_28);
    }
    local_28 = local_40;
    local_38 = local_50;
    uVar1 = local_38;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    local_38._0_1_ = (char)local_50;
    local_38 = uVar1;
    if ((local_50 & 1) == 0) {
      if ((char)local_38 == '\0') {
LAB_00217945:
        uVar4 = ACFULogging::getLogInstance();
        pcVar6 = "%s::%s: failed to acquire file path c string\n";
        goto LAB_00217951;
      }
      local_40 = (void *)((long)&local_38 + 1);
    }
    else if (CONCAT44(uStack_44,uStack_48) == 0) goto LAB_00217945;
    iVar2 = _stat_INODE64(local_40);
    if (iVar2 == -1) {
      uVar4 = ACFULogging::getLogInstance();
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      uVar3 = 0;
      ACFULogging::handleMessage
                (uVar4,2,"%s::%s: failed to obtain file stats: (%s)\n","ACFUDataContainer",
                 "copyData",pcVar6);
    }
    else {
      uVar3 = copyData(in_RDI,0,local_80);
    }
  }
  if ((local_38 & 1) != 0) {
    operator_delete(local_28);
  }
  return uVar3;
}

