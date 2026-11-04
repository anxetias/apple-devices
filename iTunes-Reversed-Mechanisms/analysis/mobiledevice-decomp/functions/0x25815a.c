// rea decompile_all
// name: SERestoreInfo::makeSEFirmware
// address: 0x25815a
// body: available
// range: 0x25815a-0x258250 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25824c to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::makeSEFirmware(__CFData const*) */

SERestoreInfo * __thiscall SERestoreInfo::makeSEFirmware(SERestoreInfo *this,__CFData *param_1)

{
  int iVar1;
  SEFirmwareBase *this_00;
  undefined *puVar2;
  SEException *this_01;
  undefined8 *puVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_38 [24];
  
  iVar1 = SEFirmwareBase::getFormatVer(param_1);
  if (iVar1 == 1) {
    this_00 = operator_new(0x28);
    SEFirmwareBase::SEFirmwareBase(this_00,param_1);
    puVar2 = &P73BaseFirmware::vtable;
  }
  else {
    if (iVar1 != 0) {
      this_01 = (SEException *)___cxa_allocate_exception(0x48);
      std::to_string((uint)local_38);
      puVar3 = (undefined8 *)std::string::insert((ulong)local_38,(char *)0x0);
      local_48 = puVar3[2];
      local_58 = *puVar3;
      uStack_50 = puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      SEException::SEException
                (this_01,(string *)&local_58,0xf,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(this_01,&SEException::typeinfo,SEException::~SEException);
    }
    this_00 = operator_new(0x28);
    SEFirmwareBase::SEFirmwareBase(this_00,param_1);
    puVar2 = &IcefallFirmware::vtable;
  }
  *(undefined **)this_00 = puVar2 + 0x10;
  *(SEFirmwareBase **)this = this_00;
  return this;
}

