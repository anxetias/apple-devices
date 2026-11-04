// rea decompile_all
// name: ACFURestoreHost::init
// address: 0x214b6c
// body: available
// range: 0x214b6c-0x214ca2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::init(__CFDictionary const*, __CFString const*) */

ulong __thiscall
ACFURestoreHost::init(ACFURestoreHost *this,__CFDictionary *param_1,__CFString *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_R14;
  ulong uVar2;
  
  uVar1 = ACFULogging::getLogInstance();
  ACFULogging::handleMessage
            (uVar1,0,"%s::%s: ACFU Version: %s\n","ACFURestoreHost","init",
             "AppleConvergedFirmwareUpdater-447~8585");
  uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8),
                   param_2 != (__CFString *)0x0 && param_1 != (__CFDictionary *)0x0);
  if (param_2 != (__CFString *)0x0 && param_1 != (__CFDictionary *)0x0) {
    *(__CFDictionary **)(this + 0x10) = param_1;
    _AMSupportSafeRetain(param_1);
    ACFUError::createAppendedDomain((ACFUError *)(this + 0x18),param_2);
  }
  else {
    uVar1 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar1,2,"%s::%s: bad parameter: options %p, domain %p\n","ACFURestoreHost","init",
               param_1,param_2);
  }
  if (((((*(long *)(this + 0x28) == *(long *)(this + 0x30)) ||
        (*(long *)(this + 0x88) == *(long *)(this + 0x90))) ||
       (*(long *)(this + 0x40) == *(long *)(this + 0x48))) ||
      ((*(long *)(this + 0x58) == *(long *)(this + 0x60) ||
       (*(long *)(this + 0x70) == *(long *)(this + 0x78))))) ||
     ((*(long *)(this + 0xb0) == 0 ||
      ((*(long *)(this + 0xd8) == 0 || (*(long *)(this + 0xe0) == 0)))))) {
    uVar1 = ACFULogging::getLogInstance();
    uVar2 = 0;
    ACFULogging::handleMessage
              (uVar1,2,"%s::%s: initialization failure due to incomplete parameters\n",
               "ACFURestoreHost","init");
  }
  return uVar2 & 0xffffffff;
}

