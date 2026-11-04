// rea decompile_all
// name: _IXStringForIXError
// address: 0x3e1a8
// body: available
// range: 0x3e1a8-0x3e378 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3e33e to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IXStringForIXError(undefined8 param_1,ulong param_2)

{
  char cVar1;
  undefined8 uVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)();
  cVar1 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar2,"isEqualToString:",&cf_IXUserPresentableErrorDomain);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"isEqualToString:",&cf_IXErrorDomain);
    if (cVar1 == '\0') {
      IVar3 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",
                         &cf_Unhandlederrordomain___code_lu,uVar2,param_2);
      pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(IVar3);
      goto LAB_0003e328;
    }
    if (param_2 < 0x3b) {
      pcVar4 = *(cfstringStruct **)(&DAT_00443348 + param_2 * 8);
      goto LAB_0003e328;
    }
    pcVar4 = &cf_Unhandledreasonforcode__luindomainIXErrorDomain;
LAB_0003e312:
    IVar3 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar4,param_2);
    pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(IVar3);
  }
  else {
    switch(param_2) {
    case 0:
      pcVar4 = &cf_Unknownerror_;
      break;
    case 1:
      pcVar4 = &cf_Couldnotinstallatthistime_;
      break;
    case 2:
      pcVar4 = &cf_Couldnotinstall_;
      break;
    case 3:
      pcVar4 = &cf_Usercanceled_;
      break;
    case 4:
      pcVar4 = &cf_Incompatibledevicearchitecture_;
      break;
    case 5:
      pcVar4 = &cf_Devicelacksrequiredcapabilities_;
      break;
    case 6:
      pcVar4 = &cf_Incompatibleplatform_;
      break;
    case 7:
      pcVar4 = &cf_NeedsreinstallationfromMDM_;
      break;
    case 8:
      pcVar4 = &cf_Needsmanualreinstallation_;
      break;
    case 9:
      pcVar4 = &cf_NolongeravailableinAppStore_;
      break;
    case 10:
      pcVar4 = &cf_Contentisnotownedbythisuser_;
      break;
    case 0xb:
      pcVar4 = &cf_Insufficientstorage_;
      break;
    case 0xc:
      pcVar4 = &cf_Userdataforthisappfailedtorestorefrombackup_;
      break;
    case 0xd:
      pcVar4 = &cf_Forbidden_;
      break;
    case 0xe:
      pcVar4 = &cf_Unabletoverifyintegrity_;
      break;
    case 0xf:
      pcVar4 = &cf_SINFnotforthisplatform_;
      break;
    case 0x10:
      pcVar4 = &cf_DeviceOSversionistoolowtorunthisapp_;
      break;
    case 0x11:
      pcVar4 = &cf_Codesignatureversionisnolongersupported_;
      break;
    case 0x12:
      pcVar4 = &cf_Deviceisnoteligibletoinstallthisapp_;
      break;
    default:
      if (param_2 == 0x36) {
        pcVar4 = &cf_Reachedcodemeantonlyfortesting_;
        break;
      }
      pcVar4 = &cf_Unhandledreasonforcode__luindomainIXUserPresentableErrorDomain;
      goto LAB_0003e312;
    }
  }
LAB_0003e328:
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  _objc_autoreleaseReturnValue(pcVar4);
  return;
}

