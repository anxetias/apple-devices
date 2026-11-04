// rea decompile_all
// name: SERestoreInfo::IcefallDeliveryObject::addMac
// address: 0x253f02
// body: available
// range: 0x253f02-0x253fd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x253fd1 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallDeliveryObject::addMac(ImageType_t, DERItem&) */

void __thiscall
SERestoreInfo::IcefallDeliveryObject::addMac
          (IcefallDeliveryObject *this,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  SEException *this_00;
  piecewise_construct_t *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  int local_20 [2];
  
  puVar1 = *(undefined8 **)(this + 0x28);
  do {
    local_20[0] = param_2;
    if (puVar1 == (undefined8 *)0x0) {
      local_38 = *param_3;
      uStack_30 = param_3[1];
      local_40 = &PTR__BLOB_0044f1c8;
      local_28 = 0;
      local_48 = (piecewise_construct_t *)local_20;
      lVar2 = std::
              __tree<std::__value_type<ImageType_t,SERestoreInfo::BLOB>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,SERestoreInfo::BLOB>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,SERestoreInfo::BLOB>>>
              ::
              __emplace_unique_key_args<ImageType_t,std::piecewise_construct_t_const&,std::tuple<ImageType_t_const&>,std::tuple<>>
                        (this + 0x20,local_48,(tuple *)&std::piecewise_construct,(tuple *)&local_48)
      ;
      BLOB::operator=((BLOB *)(lVar2 + 0x28),(BLOB *)&local_40);
      BLOB::~BLOB((BLOB *)&local_40);
      return;
    }
    if (*(int *)(puVar1 + 4) <= param_2) {
      if (param_2 <= *(int *)(puVar1 + 4)) {
        this_00 = (SEException *)___cxa_allocate_exception(0x48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (&local_40,"Fail to addMac");
        SEException::SEException
                  (this_00,(string *)&local_40,0xf,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(this_00,&SEException::typeinfo,SEException::~SEException);
      }
      puVar1 = puVar1 + 1;
    }
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}

