// rea decompile_all
// name: _BZOpen
// address: 0xb4ce5
// body: available
// range: 0xb4ce5-0xb4e02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * _BZOpen(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  uint in_EAX;
  undefined4 *puVar1;
  FILE *f;
  BZFILE *pBVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uStack_38;
  
  uStack_38 = (ulong)in_EAX;
  puVar1 = _calloc(1,0x30);
  if (puVar1 == (undefined4 *)0x0) {
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    pcVar6 = "%s:%d: malloc of wrapper failed: %s\n";
    uVar5 = 0x46;
  }
  else {
    *puVar1 = param_2;
    *(undefined8 *)(puVar1 + 2) = param_3;
    *(undefined8 *)(puVar1 + 4) = param_4;
    *(undefined8 *)(puVar1 + 6) = param_1;
    f = _funopen(puVar1,(int *)__fh_read,(int *)0x0,(fpos_t *)0x0,(int *)0x0);
    *(FILE **)(puVar1 + 8) = f;
    if (f != (FILE *)0x0) {
      pBVar2 = _BZ2_bzReadOpen((int *)((long)&uStack_38 + 4),f,0,0,(void *)0x0,0);
      *(BZFILE **)(puVar1 + 10) = pBVar2;
      if (pBVar2 != (BZFILE *)0x0) {
        return puVar1;
      }
      _syslog(3,"%s:%d: BZ2_bzReadOpen failed: %d\n",
              "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
              ,0x54,uStack_38._4_4_);
      goto LAB_000b4de7;
    }
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    pcVar6 = "%s:%d: fropen failed: %s\n";
    uVar5 = 0x4f;
  }
  _syslog(3,pcVar6,
          "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
          ,uVar5,pcVar4);
LAB_000b4de7:
  _BZClose(puVar1);
  return (undefined4 *)0x0;
}

