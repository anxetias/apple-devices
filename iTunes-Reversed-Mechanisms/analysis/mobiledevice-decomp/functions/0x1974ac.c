// rea decompile_all
// name: RPSocket_srv::write
// address: 0x1974ac
// body: available
// range: 0x1974ac-0x197500 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_srv::write(void const*, unsigned long) */

long __thiscall RPSocket_srv::write(RPSocket_srv *this,void *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if (write(void_const*,unsigned_long)::once != -1) {
    write(this,(ulong)param_1);
  }
  if (_ld_AMDServiceConnectionSend == (code *)0x0) {
    lVar2 = -1;
  }
  else {
    iVar1 = (*_ld_AMDServiceConnectionSend)(*(undefined8 *)(this + 0x188),param_1,param_2);
    lVar2 = (long)iVar1;
  }
  return lVar2;
}

