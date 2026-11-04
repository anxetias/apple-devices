// rea decompile_all
// name: _DOS2UNIXTime
// address: 0x9842b
// body: available
// range: 0x9842b-0x984b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _DOS2UNIXTime(uint param_1)

{
  tm *ptVar1;
  time_t local_18;
  
  local_18 = _time((time_t *)0x0);
  if (_DOS2UNIXTime_t == (tm *)0x0) {
    _DOS2UNIXTime_t = _localtime_r(&local_18,(tm *)&_DOS2UNIXTime_buf);
  }
  ptVar1 = _DOS2UNIXTime_t;
  _DOS2UNIXTime_t->tm_isdst = -1;
  ptVar1->tm_sec = param_1 * 2 & 0x3e;
  ptVar1->tm_min = param_1 >> 5 & 0x3f;
  ptVar1->tm_hour = param_1 >> 0xb & 0x1f;
  ptVar1->tm_mday = param_1 >> 0x10 & 0x1f;
  ptVar1->tm_mon = (param_1 >> 0x15 & 0xf) - 1;
  ptVar1->tm_year = (param_1 >> 0x19) + 0x50;
  _mktime(ptVar1);
  return;
}

