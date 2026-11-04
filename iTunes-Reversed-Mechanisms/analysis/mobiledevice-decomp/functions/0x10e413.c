// rea decompile_all
// name: __ConvertOpenSSLErrorToErrno
// address: 0x10e413
// body: available
// range: 0x10e413-0x10e482 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __ConvertOpenSSLErrorToErrno(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = _SSL_get_error();
  iVar4 = 0x2b;
  switch(uVar1) {
  case 0:
  case 6:
    iVar4 = 0;
    break;
  case 1:
    uVar2 = _ERR_peek_error();
    iVar4 = 0x2b;
    if ((int)uVar2 == 0) {
      iVar4 = 0;
    }
    break;
  case 2:
  case 3:
  case 7:
  case 8:
    iVar4 = 0x23;
    break;
  case 5:
    uVar2 = _ERR_peek_error();
    iVar4 = 0;
    if ((param_2 != 0 || (int)uVar2 != 0) && (iVar4 = 0x2b, param_2 == -1 && (int)uVar2 == 0)) {
      piVar3 = ___error();
      iVar4 = *piVar3;
    }
  }
  _ERR_clear_error();
  return iVar4;
}

