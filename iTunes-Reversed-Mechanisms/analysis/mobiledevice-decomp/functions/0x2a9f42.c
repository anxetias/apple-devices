// rea decompile_all
// name: /usr/lib/libc++.1.dylib::std::string::string
// address: 0x2a9f42
// body: available
// range: 0x2a9f42-0x2a9f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::string::string(std::string const&, unsigned long, unsigned long, std::allocator<char>
   const&) */

void __thiscall
std::string::string(string *this,string *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x002a9f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_string_0048bed0)();
  return;
}

