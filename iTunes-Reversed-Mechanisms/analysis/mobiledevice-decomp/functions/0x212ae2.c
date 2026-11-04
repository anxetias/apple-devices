// rea decompile_all
// name: ACFURestoreHost::copyToPersonalizedBundlePath
// address: 0x212ae2
// body: available
// range: 0x212ae2-0x212bfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::copyToPersonalizedBundlePath(__CFDictionary const*, __CFString const*, __CFData
   const*) */

undefined8 __thiscall
ACFURestoreHost::copyToPersonalizedBundlePath
          (ACFURestoreHost *this,__CFDictionary *param_1,__CFString *param_2,__CFData *param_3)

{
  char cVar1;
  uint uVar2;
  __CFString *p_Var3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  __CFData *extraout_RDX;
  __CFData *extraout_RDX_00;
  __CFData *extraout_RDX_01;
  __CFData *extraout_RDX_02;
  undefined8 uVar7;
  __CFURL *p_Var8;
  __CFURL *local_30;
  
  local_30 = (__CFURL *)0x0;
  p_Var3 = (__CFString *)_CFDictionaryGetValue(param_1,&cf_DestBundlePath);
  if (p_Var3 != (__CFString *)0x0) {
    lVar4 = _CFURLGetTypeID();
    lVar5 = _CFGetTypeID(p_Var3);
    if (lVar4 == lVar5) {
      uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar2 = _AMSupportCopyURLWithAppendedComponent(uVar6,p_Var3,param_2,0,&local_30);
      if (uVar2 == 0) {
        uVar2 = _AMSupportMakeDirectory(local_30);
        if (uVar2 == 0) {
          uVar2 = _AMSupportWriteDataToFileURL(uVar6,param_3,local_30,1);
          if (uVar2 == 0) {
            p_Var8 = local_30;
            cVar1 = ACFUCommon::doesPathExist(local_30);
            uVar7 = 0;
            if (cVar1 != '\0') goto LAB_00212bb8;
            copyToPersonalizedBundlePath
                      ((__CFDictionary *)p_Var8,(__CFString *)param_3,extraout_RDX_02);
          }
          else {
            copyToPersonalizedBundlePath
                      ((__CFDictionary *)(ulong)uVar2,(__CFString *)param_3,extraout_RDX_01);
          }
          uVar7 = 0x3ec;
        }
        else {
          copyToPersonalizedBundlePath((__CFDictionary *)(ulong)uVar2,p_Var3,extraout_RDX_00);
          uVar7 = 0x3eb;
        }
      }
      else {
        copyToPersonalizedBundlePath((__CFDictionary *)(ulong)uVar2,p_Var3,extraout_RDX);
        uVar7 = 4000;
      }
      goto LAB_00212bb8;
    }
  }
  uVar6 = ACFULogging::getLogInstance();
  uVar7 = 0;
  ACFULogging::handleMessage
            (uVar6,0,
             "%s::%s: destination bundle was not specified, so we are skipping the copy step...\n",
             "ACFURestoreHost","copyToPersonalizedBundlePath");
LAB_00212bb8:
  if (local_30 != (__CFURL *)0x0) {
    _CFRelease();
  }
  return uVar7;
}

