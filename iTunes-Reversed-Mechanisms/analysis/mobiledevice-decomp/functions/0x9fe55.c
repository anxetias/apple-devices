// rea decompile_all
// name: _ZipStreamShouldOrderFileEarly
// address: 0x9fe55
// body: available
// range: 0x9fe55-0x9ffeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ZipStreamShouldOrderFileEarly(char *param_1,undefined1 *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  size_t sVar7;
  long lVar8;
  undefined8 unaff_R15;
  ulong uVar9;
  
  *param_2 = 0;
  iVar2 = _strncmp(param_1,"com.apple.deltainstallcommands.",0x1f);
  uVar9 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
  if (iVar2 != 0) {
    iVar2 = _strncmp(param_1,"Payload/",8);
    if (iVar2 == 0) {
      iVar2 = _strcmp(param_1,"Payload/");
      if (iVar2 != 0) {
        pcVar3 = _strdup(param_1 + 8);
        pcVar4 = _strchr(pcVar3,0x2f);
        if (pcVar4 == (char *)0x0) {
LAB_0009ffca:
          uVar9 = 0;
        }
        else {
          *pcVar4 = '\0';
          pcVar5 = _rindex(pcVar3,0x2e);
          if (pcVar5 != (char *)0x0) {
            sVar6 = _strlen(pcVar5);
            lVar8 = 0;
            do {
              pcVar1 = *(char **)((long)&_bundle_extensions + lVar8);
              sVar7 = _strlen(pcVar1);
              if ((sVar7 == sVar6) && (iVar2 = _strcasecmp(pcVar5,pcVar1), iVar2 == 0)) {
                *pcVar4 = '/';
                uVar9 = CONCAT71((int7)((ulong)pcVar5 >> 8),1);
                if (pcVar4[1] == '\0') goto LAB_0009ffcd;
                pcVar4 = pcVar4 + 1;
                iVar2 = _strncmp(pcVar4,"_CodeSignature/",0xf);
                if (((iVar2 == 0) ||
                    (iVar2 = _strcmp(pcVar4,"embedded.mobileprovision"), iVar2 == 0)) ||
                   (iVar2 = _strcmp(pcVar4,"ResourceRules.plist"), iVar2 == 0)) goto LAB_0009ffcd;
                iVar2 = _strcmp(pcVar4,"Info.plist");
                if (iVar2 != 0) goto LAB_0009ffca;
                *param_2 = 1;
                goto LAB_0009ffcd;
              }
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0x18);
          }
          *pcVar4 = '/';
          uVar9 = 0;
        }
LAB_0009ffcd:
        _free(pcVar3);
      }
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9 & 0xffffffff;
}

