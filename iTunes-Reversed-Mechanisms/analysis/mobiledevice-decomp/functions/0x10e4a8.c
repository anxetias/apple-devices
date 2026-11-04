// rea decompile_all
// name: _AMDServiceConnectionSend
// address: 0x10e4a8
// body: available
// range: 0x10e4a8-0x10e58b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMDServiceConnectionSend(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = 0xffffffff;
  if (((param_1 != 0) && (param_2 != (void *)0x0)) && (param_3 < 0x7fffffff)) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar6 = _send(*(int *)(param_1 + 0x10),param_2,param_3,0);
    }
    else if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar1 = _SSL_write(*(long *)(param_1 + 0x18),param_2,param_3 & 0xffffffff);
      uVar4 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
      }
      else {
        if (uVar1 != 0) {
          piVar3 = ___error();
          *piVar3 = 0;
          uVar6 = uVar4;
          goto LAB_0010e570;
        }
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        uVar4 = 0;
      }
      iVar2 = __ConvertOpenSSLErrorToErrno(uVar5,uVar4);
      piVar3 = ___error();
      *piVar3 = iVar2;
    }
  }
LAB_0010e570:
  return uVar6 & 0xffffffff;
}

