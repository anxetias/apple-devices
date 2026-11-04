// rea decompile_all
// name: FUN_10000f0f1
// address: 0x10000f0f1
// body: available
// range: 0x10000f0f1-0x10000f1a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000f0f1(void)

{
  long lVar1;
  
  if (DAT_100022be8 != 0) {
    FUN_10000f1a9();
    lVar1 = FUN_10000f772(*(undefined8 *)(DAT_100022be8 + 0x28));
    if (lVar1 != 0) {
      _CFRunLoopSourceInvalidate(lVar1);
    }
    lVar1 = FUN_10000f772(*(undefined8 *)(DAT_100022be8 + 0x30));
    if (lVar1 != 0) {
      _CFRunLoopSourceInvalidate(lVar1);
    }
    if (DAT_100021034 == '\x01') {
      lVar1 = FUN_10000f772(*(undefined8 *)(DAT_100022be8 + 0x38));
      if (lVar1 == 0) {
        if (4 < DAT_100021030) {
          FUN_1000008d2(5,0,&cf_failedtogetthev3runloopsource);
        }
      }
      else {
        _CFRunLoopSourceInvalidate(lVar1);
      }
    }
    FUN_10000e3e6(DAT_100022be8);
    DAT_100022be8 = 0;
  }
  return;
}

