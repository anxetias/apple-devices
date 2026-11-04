// rea decompile_all
// name: RTKitFirmware::setManifest
// address: 0x21dd28
// body: available
// range: 0x21dd28-0x21ddbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RTKitFirmware::setManifest(__CFData const*) */

ulong __thiscall RTKitFirmware::setManifest(RTKitFirmware *this,__CFData *param_1)

{
  char cVar1;
  ACFUFTABFile *this_00;
  undefined8 uVar2;
  undefined8 unaff_R15;
  ulong uVar3;
  
  if (*(long *)(this + 0x20) == 0) {
LAB_0021dd77:
    uVar2 = ACFULogging::getLogInstance();
    uVar3 = 0;
    ACFULogging::handleMessage
              (uVar2,2,"%s::%s: Invalid firmware file\n","RTKitFirmware","setManifest");
  }
  else {
    this_00 = (ACFUFTABFile *)
              ___dynamic_cast(*(long *)(this + 0x20),&ACFUFile::typeinfo,&ACFUFTABFile::typeinfo,0);
    if (this_00 == (ACFUFTABFile *)0x0) goto LAB_0021dd77;
    cVar1 = ACFUFTABFile::setManifest(this_00,param_1);
    uVar3 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
    if (cVar1 == '\0') {
      setManifest((__CFData *)this_00);
      uVar3 = 0;
      goto LAB_0021ddae;
    }
  }
  ACFUFirmware::setManifest((ACFUFirmware *)this,param_1);
LAB_0021ddae:
  return uVar3 & 0xffffffff;
}

