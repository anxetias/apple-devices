// rea decompile_all
// name: _DLCreatePropertyListFromFile
// address: 0xc362
// body: available
// range: 0xc362-0xc479 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLCreatePropertyListFromFile(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined1 auVar7 [16];
  undefined1 local_38 [8];
  
  lVar2 = _CFReadStreamCreateWithFile(0,param_1);
  if (lVar2 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      uVar5 = _CFStringCreateWithFormat(0,0,&cf_Couldnotcreateareadstreamforthefileat____,param_1);
      *param_2 = uVar5;
      return 0;
    }
    return 0;
  }
  cVar1 = _CFReadStreamOpen(lVar2);
  if (cVar1 == '\x01') {
    uVar3 = _CFPropertyListCreateFromStream(0,lVar2,0,2,local_38,param_2);
    _CFReadStreamClose(lVar2);
    goto LAB_0000c460;
  }
  auVar7 = _CFReadStreamGetError(lVar2);
  if (auVar7._0_8_ == 2) {
    if (param_2 != (undefined8 *)0x0) {
      pcVar6 = &cf_MacOStatuserrornumber_dwhilereadingfromthefileat____;
LAB_0000c444:
      uVar5 = _CFStringCreateWithFormat(0,0,pcVar6,auVar7._8_8_ & 0xffffffff,param_1);
LAB_0000c458:
      uVar3 = 0;
      *param_2 = uVar5;
      goto LAB_0000c460;
    }
  }
  else if (auVar7._0_8_ == 1) {
    if (param_2 != (undefined8 *)0x0) {
      pcVar4 = _strerror(auVar7._8_4_);
      uVar5 = _CFStringCreateWithFormat
                        (0,0,&cf_Errornumber_dwhilereadingfromthefileat______s,
                         auVar7._8_8_ & 0xffffffff,param_1,pcVar4);
      goto LAB_0000c458;
    }
  }
  else if (param_2 != (undefined8 *)0x0) {
    pcVar6 = &cf_Unknownerrornumber_dwhilereadingfromthefileat____;
    goto LAB_0000c444;
  }
  uVar3 = 0;
LAB_0000c460:
  _CFRelease(lVar2);
  return uVar3;
}

