// rea decompile_all
// name: SERestoreInfo::CallAndThrow<DERReturn>
// address: 0x24b923
// body: available
// range: 0x24b923-0x24b974 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24b970 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void SERestoreInfo::CallAndThrow<DERReturn>(DERReturn, std::string) */

void SERestoreInfo::CallAndThrow<DERReturn>(int param_1,string *param_2)

{
  SEException *this;
  
  if (param_1 == 0) {
    return;
  }
  this = (SEException *)___cxa_allocate_exception(0x48);
  SEException::SEException(this,param_2,param_1,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,&SEException::typeinfo,SEException::~SEException);
}

