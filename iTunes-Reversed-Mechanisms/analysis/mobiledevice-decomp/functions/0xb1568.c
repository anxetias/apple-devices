// rea decompile_all
// name: _copy_link_data
// address: 0xb1568
// body: available
// range: 0xb1568-0xb1618 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _copy_link_data(char *param_1,undefined8 *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  int *piVar7;
  char *pcVar8;
  
  sVar1 = *(size_t *)((long)param_2 + 0xc);
  puVar5 = _malloc(sVar1 + 0x1e);
  uVar2 = param_2[1];
  uVar3 = *(undefined8 *)((long)param_2 + 0xe);
  uVar4 = *(undefined8 *)((long)param_2 + 0x16);
  *puVar5 = *param_2;
  puVar5[1] = uVar2;
  *(undefined8 *)((long)puVar5 + 0xe) = uVar3;
  *(undefined8 *)((long)puVar5 + 0x16) = uVar4;
  sVar6 = _readlink(param_1,(char *)((long)puVar5 + 0x1e),sVar1);
  if (sVar1 == sVar6) {
    *(undefined8 *)((long)puVar5 + 0x16) = *(undefined8 *)((long)param_2 + 0xc);
  }
  else {
    if (_verbose_onceToken != -1) {
      _copy_link_data_cold_1();
    }
    if (_gVerbose == '\x01') {
      piVar7 = ___error();
      pcVar8 = _strerror(*piVar7);
      _dmlog("copy_link_data",0x99,&cf_readlinkfailedfor_s__s,param_1,pcVar8);
    }
    if (puVar5 != (undefined8 *)0x0) {
      _free(puVar5);
    }
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}

