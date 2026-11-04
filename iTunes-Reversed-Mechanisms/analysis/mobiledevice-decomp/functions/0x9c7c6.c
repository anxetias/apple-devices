// rea decompile_all
// name: _CreateCDRecord
// address: 0x9c7c6
// body: available
// range: 0x9c7c6-0x9c87c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _CreateCDRecord(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  time_t tVar4;
  
  sVar2 = _strlen(param_1);
  if (sVar2 < 0x10000) {
    puVar3 = _calloc(1,sVar2 + 0x3a);
    *puVar3 = 0x14031e02014b50;
    tVar4 = _time((time_t *)0x0);
    uVar1 = _UNIX2DOSTime(tVar4);
    *(undefined4 *)((long)puVar3 + 0xc) = uVar1;
    *(short *)((long)puVar3 + 0x1c) = (short)sVar2;
    *(undefined2 *)((long)puVar3 + 0x1e) = 0xc;
    *(uint *)((long)puVar3 + 0x26) = param_2 << 0x10 | 0x4000;
    _memcpy((void *)((long)puVar3 + 0x2e),param_1,sVar2);
    *(undefined4 *)((long)puVar3 + sVar2 + 0x2e) = 0x85855;
    *(undefined4 *)((long)puVar3 + sVar2 + 0x32) = param_4;
    *(undefined4 *)((long)puVar3 + sVar2 + 0x36) = param_3;
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}

