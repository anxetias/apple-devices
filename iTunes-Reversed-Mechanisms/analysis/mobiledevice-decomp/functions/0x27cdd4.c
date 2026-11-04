// rea decompile_all
// name: _AMAuthInstallBasebandSetFusings
// address: 0x27cdd4
// body: available
// range: 0x27cdd4-0x27cfc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallBasebandSetFusings(long param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (param_1 == 0) {
    pcVar7 = "missing amai";
  }
  else if (param_4 == 0) {
    pcVar7 = "missing snum";
  }
  else {
    lVar3 = _CFGetTypeID(param_4);
    lVar4 = _CFDataGetTypeID();
    if (lVar3 == lVar4) {
      iVar1 = __AMAuthInstallBasebandCheckSnum(param_2,param_4);
      if (iVar1 != 0) {
        return 1;
      }
      __AMAuthInstallBasebandParametersFinalize(*(undefined8 *)(param_1 + 0x30));
      puVar5 = _calloc(1,0xb0);
      if (puVar5 != (undefined4 *)0x0) {
        ___bzero(puVar5,0xb0);
        *(undefined4 **)(param_1 + 0x30) = puVar5;
        uVar2 = param_2 - 0x50;
        if ((uVar2 < 0x19) && (((0x1a14000U >> (uVar2 & 0x1f) & 1) != 0 || (uVar2 == 0)))) {
          *puVar5 = 2;
        }
        else if (((param_2 == 0x3b0e1) ||
                 (((param_2 == 0x7f0e1 || (param_2 == 0xe50e1)) || (param_2 == 0x1440e1)))) ||
                (((((param_2 == 0x1720e1 || (param_2 == 0x19f0e1)) ||
                   ((param_2 == 0x1fe0e1 || ((param_2 == 0x2af0e1 || (param_2 == 0x4600e1)))))) ||
                  (param_2 == 0x5000e1)) ||
                 (((((param_2 == 0x5a00e1 || (param_2 == 0x6f10e1)) || (param_2 == 0x6f20e1)) ||
                   ((param_2 == 0x7f50e1 || (param_2 == 0x9210e1)))) || (param_2 == 0x9540e1)))))) {
          *puVar5 = 3;
        }
        else {
          _AMAuthInstallLog(3,"AMAuthInstallBasebandSetFusings","chipID: 0x%x is not supported",
                            param_2);
          puVar5 = *(undefined4 **)(param_1 + 0x30);
        }
        puVar5[1] = param_2;
        puVar5[2] = param_3;
        uVar6 = _CFRetain(param_4);
        lVar3 = *(long *)(param_1 + 0x30);
        *(undefined8 *)(lVar3 + 0x10) = uVar6;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(undefined8 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x48) = 0;
        *(undefined8 *)(lVar3 + 0x68) = 0;
        *(undefined8 *)(lVar3 + 0x70) = 0;
        return 0;
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      return 2;
    }
    pcVar7 = "snum is not CFData";
  }
  _AMAuthInstallLog(3,"AMAuthInstallBasebandSetFusings",pcVar7);
  return 1;
}

