// rea decompile_all
// name: std::__destroy_at[abi:ne190102]<std::pair<std::vector<unsigned_char,std::allocator<unsigned_char>>const,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,0>
// address: 0x25281e
// body: available
// range: 0x25281e-0x25284d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x252842 to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__destroy_at[abi:ne190102]<std::pair<std::vector<unsigned char, std::allocator<unsigned
   char> > const, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >,
   0>(std::pair<std::vector<unsigned char, std::allocator<unsigned char> > const,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >*) */

void std::
     __destroy_at_abi_ne190102_<std::pair<std::vector<unsigned_char,std::allocator<unsigned_char>>const,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,0>
               (pair_conflict *param_1)

{
  void *pvVar1;
  
  shared_ptr<RTKitFirmware>::~shared_ptr_abi_ne190102_
            ((shared_ptr<RTKitFirmware> *)(param_1 + 0x18));
  pvVar1 = *(void **)param_1;
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

