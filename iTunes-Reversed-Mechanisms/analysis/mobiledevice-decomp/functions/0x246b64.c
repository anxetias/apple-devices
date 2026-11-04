// rea decompile_all
// name: RoseCapabilities::init
// address: 0x246b64
// body: available
// range: 0x246b64-0x246c14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RoseCapabilities::init(unsigned short) */

ulong __thiscall RoseCapabilities::init(RoseCapabilities *this,ushort param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined6 in_register_00000032;
  
  iVar3 = (int)CONCAT62(in_register_00000032,param_1);
  if (iVar3 == 0x2024) {
    uVar1 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage(uVar1,0,"%s::%s: Identified chip as R2\n","RoseCapabilities","init");
    *(undefined4 *)this = 1;
  }
  else {
    if (iVar3 != 0x2006) {
      uVar1 = ACFULogging::getLogInstance();
      uVar2 = 0;
      ACFULogging::handleMessage
                (uVar1,2,"%s::%s: Unrecognized chipID 0x%x\n","RoseCapabilities","init",param_1);
      goto LAB_00246c0e;
    }
    uVar1 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage(uVar1,0,"%s::%s: Identified chip as R1\n","RoseCapabilities","init");
    *(undefined4 *)this = 0;
  }
  uVar2 = CONCAT71((int7)((ulong)this >> 8),1);
LAB_00246c0e:
  return uVar2 & 0xffffffff;
}

