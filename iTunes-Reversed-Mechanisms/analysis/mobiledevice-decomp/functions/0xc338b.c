// rea decompile_all
// name: __sendMessage
// address: 0xc338b
// body: available
// range: 0xc338b-0xc34f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __sendMessage(long param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  FILE *pFVar5;
  
  if (param_1 == 0) {
    _fwrite("_sendMessage called without valid ProcessLink object\n",0x35,1,
            *(FILE **)PTR____stderrp_004412c0);
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == -1) {
    iVar2 = __startChild(param_1);
    if (iVar2 != 0) {
      pFVar5 = *(FILE **)PTR____stderrp_004412c0;
      pcVar4 = "%s: Can\'t create child...\n";
      goto LAB_000c3478;
    }
    iVar2 = *(int *)(param_1 + 0xc);
  }
  iVar2 = __writeDictionary(iVar2,param_2,"Parent");
  puVar1 = PTR____stderrp_004412c0;
  if (iVar2 != 0) {
    _fprintf(*(FILE **)PTR____stderrp_004412c0,
             "%s: write to child failed, trying to create child again...\n","Parent");
    __dezombify(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    iVar2 = __startChild(param_1);
    if (iVar2 == 0) {
      iVar2 = __writeDictionary(*(undefined4 *)(param_1 + 0xc),param_2,"Parent");
      if (iVar2 == 0) goto LAB_000c3495;
      pFVar5 = *(FILE **)puVar1;
      pcVar4 = "%s: Can\'t talk to child\n";
    }
    else {
      pFVar5 = *(FILE **)puVar1;
      pcVar4 = "%s: Can\'t create child\n";
    }
LAB_000c3478:
    _fprintf(pFVar5,pcVar4,"Parent");
    return 0;
  }
LAB_000c3495:
  if (param_3 == '\0') {
    return 0;
  }
  lVar3 = __readDictionary(*(undefined4 *)(param_1 + 8),"Parent");
  if (lVar3 != 0) {
    return lVar3;
  }
  _fprintf(*(FILE **)PTR____stderrp_004412c0,
           "%s: NULL response dict read, try sending command again...\n","Parent");
  __closeReadWriteFds(param_1);
  __dezombify(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}

