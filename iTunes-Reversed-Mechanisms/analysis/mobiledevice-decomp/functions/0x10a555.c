// rea decompile_all
// name: _AMDeviceProxyCopyLockdownValueWithError
// address: 0x10a555
// body: available
// range: 0x10a555-0x10a69d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMDeviceProxyCopyLockdownValueWithError(_AMDevice*, __CFString const*, __CFString const*, bool,
   int*) */

long _AMDeviceProxyCopyLockdownValueWithError
               (_AMDevice *param_1,__CFString *param_2,__CFString *param_3,bool param_4,int *param_5
               )

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  
  if (param_1 == (_AMDevice *)0x0) {
    pcVar4 = &cf_Can_tcopylockdownvaluefromNULLdevice;
  }
  else {
    iVar1 = _AMDeviceConnect();
    if (iVar1 == 0) {
      if (param_4) {
        iVar1 = _AMDeviceStartSession(param_1);
        if (iVar1 == 0) goto LAB_0010a5cc;
        iVar1 = _AMDevicePairWithCallback(param_1,0,0,0);
        if (iVar1 == 0) {
          iVar1 = _AMDeviceStartSession(param_1);
          if (iVar1 == 0) goto LAB_0010a5cc;
          uVar3 = _AMDErrorString(iVar1);
          pcVar4 = &cf_Failedtocreatesessionafterpairing__d__s_;
        }
        else {
          uVar3 = _AMDErrorString(iVar1);
          pcVar4 = &cf_Failedtopairdevicetohost__d__s_;
        }
        lVar2 = 0;
        pcVar4 = (cfstringStruct *)_AMRMakeString(pcVar4,iVar1,uVar3);
      }
      else {
LAB_0010a5cc:
        lVar2 = _AMDeviceCopyValueWithError(param_1,param_2,param_3);
        if (lVar2 == 0) {
          uVar3 = _AMDErrorString();
          pcVar4 = (cfstringStruct *)
                   _AMRMakeString(&cf_Failedtocopy_____fromdevice__d__s_,param_2,param_3,0,uVar3);
        }
        else {
          pcVar4 = (cfstringStruct *)0x0;
        }
        if (param_4) {
          _AMDeviceStopSession(param_1);
        }
      }
      _AMDeviceDisconnect(param_1);
      goto LAB_0010a604;
    }
    pcVar4 = &cf_Failedtoconnecttodeviceforlockdownquery;
  }
  lVar2 = 0;
LAB_0010a604:
  _AMRSafePrintLogAndRelease(3,pcVar4);
  return lVar2;
}

