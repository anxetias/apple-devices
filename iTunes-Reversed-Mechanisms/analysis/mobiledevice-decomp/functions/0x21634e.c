// rea decompile_all
// name: ACFUError::~ACFUError
// address: 0x21634e
// body: available
// range: 0x21634e-0x21637e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21637a to 0x216392 std::unique_ptr<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>,std::default_delete<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>>>::reset[abi:ne190102] (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUError::~ACFUError() */

void __thiscall ACFUError::~ACFUError(ACFUError *this)

{
  if (*(long *)this != 0) {
    _CFRelease();
    *(undefined8 *)this = 0;
  }
  std::
  unique_ptr<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>,std::default_delete<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>>>
  ::reset_abi_ne190102_
            ((unique_ptr<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>,std::default_delete<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>>>
              *)(this + 8),(vector *)0x0);
  return;
}

