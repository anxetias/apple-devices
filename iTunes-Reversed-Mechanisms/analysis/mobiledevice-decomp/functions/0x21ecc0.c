// rea decompile_all
// name: ACFUFirmware::setManifest
// address: 0x21ecc0
// body: available
// range: 0x21ecc0-0x21ee40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFirmware::setManifest(__CFData const*) */

bool __thiscall ACFUFirmware::setManifest(ACFUFirmware *this,__CFData *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ACFULogging *pAVar3;
  ulong *puVar4;
  undefined8 uVar5;
  byte local_80 [16];
  void *local_70;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  
  if (*(long *)(this + 0x30) != 0) {
    _CFRelease();
    *(undefined8 *)(this + 0x30) = 0;
  }
  _AMSupportSafeRetain(param_1);
  *(__CFData **)(this + 0x30) = param_1;
  lVar1 = hashData(this,param_1);
  uVar2 = ACFULogging::getLogInstance();
  if (lVar1 == 0) {
    ACFULogging::handleMessage
              (uVar2,2,"%s::%s: Digest of manifest failed\n","ACFUFirmware","setManifest");
  }
  else {
    ACFULogging::handleMessage(uVar2,0,"%s::%s: Manifest digest\n","ACFUFirmware","setManifest");
    pAVar3 = (ACFULogging *)ACFULogging::getLogInstance();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_80,"ACFUFirmware");
    puVar4 = (ulong *)std::string::append((char *)local_80);
    local_58 = (void *)puVar4[2];
    local_68 = *puVar4;
    uStack_60 = puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4 = (ulong *)std::string::append((char *)&local_68);
    local_38 = (void *)puVar4[2];
    local_48 = *puVar4;
    uStack_40 = puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    uVar2 = _CFDataGetBytePtr(lVar1);
    uVar5 = _CFDataGetLength(lVar1);
    ACFULogging::handleMessageBinary(pAVar3,&local_48,0,uVar2,uVar5,1);
    if ((local_48 & 1) != 0) {
      operator_delete(local_38);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    _CFRelease(lVar1);
  }
  return lVar1 != 0;
}

