// rea decompile_all
// name: FUN_1000080f2
// address: 0x1000080f2
// body: available
// range: 0x1000080f2-0x1000081c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000080f2(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int in_EAX;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool bVar6;
  int local_28 [2];
  
  local_28[0] = in_EAX;
  uVar2 = _CFStringGetLength();
  uVar5 = 0x8000100;
  lVar3 = _CFStringGetBytes(param_1,0,uVar2,0x8000100,0,0,0,uVar2,local_28);
  if (lVar3 < 1) {
    _fwrite("Can\'t determine byte count for identifier, falling back to ASCII.\n",0x42,1,
            *(FILE **)PTR____stderrp_100012128);
    lVar3 = _CFStringGetLength(param_1);
    uVar4 = lVar3 + 1;
    uVar5 = 0x600;
  }
  else {
    uVar4 = (ulong)(local_28[0] + 1);
  }
  if (uVar4 < 0x400) {
    cVar1 = _CFStringGetCString(param_1,param_2,uVar4,uVar5);
    bVar6 = cVar1 != '\0';
  }
  else {
    _fwrite("Identifier is too long\n",0x17,1,*(FILE **)PTR____stderrp_100012128);
    bVar6 = false;
  }
  return bVar6;
}

