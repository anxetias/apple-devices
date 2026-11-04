// rea decompile_all
// name: _CreatePropertyListFromBuffer
// address: 0x146f1d
// body: available
// range: 0x146f1d-0x14707f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _CreatePropertyListFromBuffer(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  if (param_2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar5 = "Null buffer passed.";
LAB_00147021:
    __os_log_internal(0,_md_log_log,1,pcVar5);
    return 0;
  }
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar3 = _CFReadStreamCreateWithBytesNoCopy
                    (uVar1,param_2,param_3,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
  if (lVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar5 = "Could not create stream from serialized data";
    goto LAB_00147021;
  }
  cVar2 = _CFReadStreamOpen(lVar3);
  if (cVar2 == '\0') {
    pcVar5 = "Could not open the stream";
  }
  else {
    lVar4 = _CFPropertyListCreateWithStream(uVar1,lVar3,param_3,2,param_1,0);
    if (lVar4 != 0) goto LAB_00146fc5;
    pcVar5 = "Could not create dictionary from stream";
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  lVar4 = 0;
  __os_log_internal(0,_md_log_log,1,pcVar5);
LAB_00146fc5:
  _CFReadStreamClose(lVar3);
  _CFRelease(lVar3);
  return lVar4;
}

