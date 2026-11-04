// rea decompile_all
// name: std::__split_buffer<ACFUErrorContainer,std::allocator<ACFUErrorContainer>&>::~__split_buffer
// address: 0x2166d6
// body: available
// range: 0x2166d6-0x216715 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21670c to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__split_buffer<ACFUErrorContainer, std::allocator<ACFUErrorContainer>&>::~__split_buffer()
    */

void __thiscall
std::__split_buffer<ACFUErrorContainer,std::allocator<ACFUErrorContainer>&>::~__split_buffer
          (__split_buffer<ACFUErrorContainer,std::allocator<ACFUErrorContainer>&> *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(ACFUErrorContainer **)(this + 0x10) = (ACFUErrorContainer *)(lVar2 + -0x28);
    ACFUErrorContainer::~ACFUErrorContainer((ACFUErrorContainer *)(lVar2 + -0x28));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}

