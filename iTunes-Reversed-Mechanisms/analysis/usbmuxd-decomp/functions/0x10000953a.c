// rea decompile_all
// name: FUN_10000953a
// address: 0x10000953a
// body: available
// range: 0x10000953a-0x100009626 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100009608 to 0x100009627 FUN_100009627 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100009622 to 0x100013485 _errx (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000953a(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _IOServiceMatching("IOUSBInterface");
  if (lVar2 == 0) {
    iVar1 = FUN_100010cd8();
  }
  else {
    FUN_10000944e(lVar2,&cf_idVendor,0x5ac);
    FUN_10000944e(lVar2,&cf_bInterfaceClass,0xff);
    FUN_10000944e(lVar2,&cf_bInterfaceSubClass,0xfe);
    FUN_10000944e(lVar2,&cf_bInterfaceProtocol,2);
    if (6 < DAT_100021030) {
      FUN_1000008d2(7,0,&cf__saddinginterfacematchingdictionary,"StartListeningForUSBInterfaces");
    }
    uVar3 = FUN_1000094c2();
    iVar1 = _IOServiceAddMatchingNotification
                      (uVar3,"IOServiceFirstMatch",lVar2,FUN_100009627,0,&DAT_100022bc0);
    if (iVar1 == 0) {
      FUN_100009627();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _errx(1,"IOServiceAddMatchingNotification for interface failed: 0x%x",iVar1);
}

