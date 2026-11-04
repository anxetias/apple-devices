// rea decompile_all
// name: IFWD_MemoryStream::SetSize
// address: 0x1b8c3c
// body: available
// range: 0x1b8c3c-0x1b8cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* IFWD_MemoryStream::SetSize(int) */

void __thiscall IFWD_MemoryStream::SetSize(IFWD_MemoryStream *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  
  if (param_1 < 1) {
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 8) = 0;
    }
  }
  else {
    iVar1 = *(int *)(this + 8);
    if (param_1 != iVar1) {
      pvVar3 = operator_new__((ulong)(param_1 + 1));
      pvVar2 = *(void **)this;
      if (pvVar2 == (void *)0x0) {
        ___bzero(pvVar3,param_1);
      }
      else {
        iVar4 = param_1;
        if (param_1 - iVar1 != 0 && iVar1 <= param_1) {
          ___bzero((long)pvVar3 + (long)iVar1,(long)(param_1 - iVar1));
          iVar4 = iVar1;
        }
        _memcpy(pvVar3,pvVar2,(long)iVar4);
        operator_delete__(pvVar2);
      }
      *(int *)(this + 8) = param_1;
      *(void **)this = pvVar3;
      *(void **)(this + 0x10) = pvVar3;
    }
  }
  return;
}

