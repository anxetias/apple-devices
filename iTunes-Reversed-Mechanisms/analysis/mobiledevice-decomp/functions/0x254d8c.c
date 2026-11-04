// rea decompile_all
// name: SERestoreInfo::IcefallDeliveryObject::addImageVersion
// address: 0x254d8c
// body: available
// range: 0x254d8c-0x254e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x254e43 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallDeliveryObject::addImageVersion(ImageType_t, DERItem&) */

void __thiscall
SERestoreInfo::IcefallDeliveryObject::addImageVersion
          (IcefallDeliveryObject *this,undefined4 param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  long lVar2;
  runtime_error *this_00;
  undefined8 *puVar3;
  piecewise_construct_t *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char local_40 [28];
  undefined4 local_24;
  
  local_24 = param_2;
  if (param_3[1] == 2) {
    uVar1 = *(undefined2 *)*param_3;
    local_58 = (piecewise_construct_t *)&local_24;
    lVar2 = std::
            __tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
            ::
            __emplace_unique_key_args<ImageType_t,std::piecewise_construct_t_const&,std::tuple<ImageType_t_const&>,std::tuple<>>
                      (this + 0x38,local_58,(tuple *)&std::piecewise_construct,(tuple *)&local_58);
    *(undefined2 *)(lVar2 + 0x20) = uVar1;
    return;
  }
  this_00 = (runtime_error *)___cxa_allocate_exception(0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_40,"Assertion: ");
  puVar3 = (undefined8 *)std::string::append(local_40);
  local_48 = puVar3[2];
  local_58 = (piecewise_construct_t *)*puVar3;
  uStack_50 = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  std::runtime_error::runtime_error(this_00,(string *)&local_58);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this_00,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
}

