// rea decompile_all
// name: RPSocket_srv::read
// address: 0x197456
// body: available
// range: 0x197456-0x1974aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_srv::read(void*, unsigned long) */

long __thiscall RPSocket_srv::read(RPSocket_srv *this,void *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if (read(void*,unsigned_long)::once != -1) {
    read(this,(ulong)param_1);
  }
  if (_ld_AMDServiceConnectionReceive == (code *)0x0) {
    lVar2 = -1;
  }
  else {
    iVar1 = (*_ld_AMDServiceConnectionReceive)(*(undefined8 *)(this + 0x188),param_1,param_2);
    lVar2 = (long)iVar1;
  }
  return lVar2;
}

