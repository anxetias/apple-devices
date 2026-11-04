// rea decompile_all
// name: ACFUFTABFile::copyManifest
// address: 0x219c36
// body: available
// range: 0x219c36-0x219d21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::copyManifest() */

void ACFUFTABFile::copyManifest(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long in_RSI;
  long *in_RDI;
  char *pcVar4;
  undefined4 uVar5;
  
  if (*(ACFUDataContainer **)(in_RSI + 8) == (ACFUDataContainer *)0x0) {
    copyManifest();
  }
  else {
    lVar1 = ACFUDataContainer::copyData(*(ACFUDataContainer **)(in_RSI + 8),0,0x30);
    if (lVar1 != 0) {
      lVar2 = _CFDataGetBytePtr(lVar1);
      if (lVar2 == 0) {
        uVar5 = 1;
        pcVar4 = "%s::%s: failed to copy ftab header\n";
LAB_00219cf8:
        uVar3 = ACFULogging::getLogInstance();
        lVar2 = 0;
        ACFULogging::handleMessage(uVar3,2,pcVar4,"ACFUFTABFile","copyManifest");
      }
      else {
        uVar5 = 0x3e9;
        pcVar4 = "%s::%s: no manifest found in ftab\n";
        if (((ulong)*(uint *)(lVar2 + 0x14) == 0) || (*(uint *)(lVar2 + 0x10) == 0))
        goto LAB_00219cf8;
        lVar2 = ACFUDataContainer::copyData
                          (*(ACFUDataContainer **)(in_RSI + 8),*(uint *)(lVar2 + 0x10),
                           (ulong)*(uint *)(lVar2 + 0x14));
        if (lVar2 == 0) {
          uVar5 = 4000;
          pcVar4 = "%s::%s: failed to create manifest data output\n";
          goto LAB_00219cf8;
        }
        uVar5 = 0;
      }
      _CFRelease(lVar1);
      goto LAB_00219cac;
    }
    copyManifest();
  }
  uVar5 = 1;
  lVar2 = 0;
LAB_00219cac:
  *in_RDI = lVar2;
  *(undefined4 *)(in_RDI + 1) = uVar5;
  return;
}

