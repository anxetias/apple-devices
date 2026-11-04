// rea decompile_all
// name: __writeDictionary
// address: 0xc2f7f
// body: available
// range: 0xc2f7f-0xc3063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __writeDictionary(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  ssize_t sVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  size_t sVar7;
  undefined8 uVar8;
  uint local_34;
  
  lVar2 = _CFPropertyListCreateXMLData(0);
  if (lVar2 == 0) {
    _fprintf(*(FILE **)PTR____stderrp_004412c0,"%s: Can\'t create XML data for bytes to write\n",
             param_3);
    uVar8 = 0xffffffff;
  }
  else {
    local_34 = _CFDataGetLength(lVar2);
    sVar3 = _write(param_1,&local_34,4);
    if (sVar3 < 4) {
      uVar8 = 0xffffffff;
      pcVar5 = "%s: Can\'t write length for data\n";
LAB_000c3036:
      _fprintf(*(FILE **)PTR____stderrp_004412c0,pcVar5,param_3);
    }
    else {
      uVar8 = 0;
      uVar6 = (ulong)local_34;
      if ((ulong)local_34 != 0) {
        do {
          lVar4 = _CFDataGetBytePtr(lVar2);
          sVar3 = _write(param_1,(void *)((local_34 - uVar6) + lVar4),uVar6);
          if (sVar3 < 1) {
            uVar8 = 0xfffffffe;
            pcVar5 = "%s: Can\'t write data\n";
            goto LAB_000c3036;
          }
          sVar7 = uVar6 - sVar3;
          bVar1 = sVar3 <= (long)uVar6;
          uVar6 = sVar7;
        } while (sVar7 != 0 && bVar1);
      }
    }
    _CFRelease(lVar2);
  }
  return uVar8;
}

