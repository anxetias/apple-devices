// rea decompile_all
// name: ACFUDataContainer::init
// address: 0x217618
// body: available
// range: 0x217618-0x217849 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUDataContainer::init(__CFString const*, bool) */

ulong __thiscall ACFUDataContainer::init(ACFUDataContainer *this,__CFString *param_1,bool param_2)

{
  ACFUDataContainer AVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  ACFUCommon *pAVar8;
  ACFUCommon *this_00;
  ulong uVar9;
  ulong local_60;
  long lStack_58;
  ACFUCommon *local_50;
  undefined8 local_48;
  long lStack_40;
  ACFUCommon *local_38;
  
  this_00 = (ACFUCommon *)&local_60;
  ACFUCommon::stringFromCFString(this_00,param_1);
  local_38 = local_50;
  local_48 = local_60;
  uVar9 = local_48;
  lStack_40 = lStack_58;
  local_48._0_1_ = (char)local_60;
  local_48 = uVar9;
  if ((local_60 & 1) != 0) {
    if (lStack_58 != 0) goto LAB_00217674;
LAB_002177dd:
    uVar5 = ACFULogging::getLogInstance();
    pcVar7 = "%s::%s: failed to acquire file path string\n";
    goto LAB_00217825;
  }
  if ((char)local_48 == '\0') goto LAB_002177dd;
  local_50 = (ACFUCommon *)((long)&local_48 + 1);
LAB_00217674:
  iVar2 = _access((char *)local_50,0);
  if (iVar2 == 0) {
    this_00 = (ACFUCommon *)((long)&local_48 + 1);
    pAVar8 = this_00;
    if ((local_48 & 1) != 0) {
      pAVar8 = local_38;
    }
    iVar2 = _access((char *)pAVar8,6);
    if (iVar2 == 0) {
      this[0x19] = (ACFUDataContainer)0x1;
      iVar2 = 2;
LAB_00217764:
      if ((local_48 & 1) != 0) {
        this_00 = local_38;
      }
      iVar2 = _open((char *)this_00,iVar2);
      goto LAB_0021777b;
    }
    pAVar8 = this_00;
    if ((local_48 & 1) != 0) {
      pAVar8 = local_38;
    }
    iVar2 = _access((char *)pAVar8,4);
    if (iVar2 == 0) {
      uVar5 = ACFULogging::getLogInstance();
      iVar2 = 0;
      ACFULogging::handleMessage
                (uVar5,2,
                 "%s::%s: no write permissions to file... attempting to open file as read-only\n",
                 "ACFUDataContainer","init");
      goto LAB_00217764;
    }
    uVar5 = ACFULogging::getLogInstance();
    piVar4 = ___error();
    pcVar7 = _strerror(*piVar4);
    pcVar6 = "%s::%s: no read or write permissions to file: (%s)\n";
  }
  else {
    this[0x19] = (ACFUDataContainer)0x1;
    pAVar8 = local_38;
    if ((local_48 & 1) == 0) {
      pAVar8 = (ACFUCommon *)((long)&local_48 + 1);
    }
    iVar2 = _open((char *)pAVar8,0x202,0x1b6);
LAB_0021777b:
    *(int *)(this + 8) = iVar2;
    if (-1 < iVar2) {
      lVar3 = _CFStringCreateCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_1);
      *(long *)(this + 0x10) = lVar3;
      if (lVar3 == 0) {
        uVar5 = ACFULogging::getLogInstance();
        pcVar7 = "%s::%s: failed to create copy of file path\n";
LAB_00217825:
        uVar9 = 0;
        ACFULogging::handleMessage(uVar5,2,pcVar7,"ACFUDataContainer","init");
      }
      else {
        uVar9 = CONCAT71((int7)((ulong)this_00 >> 8),1);
        AVar1 = (ACFUDataContainer)0x1;
        if (!param_2) {
          lVar3 = ACFUCommon::createMutableFileDatafromFilePath(param_1);
          *(long *)this = lVar3;
          if (lVar3 == 0) {
            uVar5 = ACFULogging::getLogInstance();
            pcVar7 = "%s::%s: failed to acquire firmware data from file path\n";
            goto LAB_00217825;
          }
          AVar1 = (ACFUDataContainer)0x0;
        }
        this[0x18] = AVar1;
      }
      goto LAB_002177bc;
    }
    uVar5 = ACFULogging::getLogInstance();
    piVar4 = ___error();
    pcVar7 = _strerror(*piVar4);
    pcVar6 = "%s::%s: failed to open file error: (%s)\n";
  }
  uVar9 = 0;
  ACFULogging::handleMessage(uVar5,2,pcVar6,"ACFUDataContainer","init",pcVar7);
LAB_002177bc:
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  return uVar9 & 0xffffffff;
}

