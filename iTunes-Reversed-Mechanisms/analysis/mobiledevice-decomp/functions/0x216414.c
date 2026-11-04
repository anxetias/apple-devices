// rea decompile_all
// name: std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>::__emplace_back_slow_path<std::string_const&,long&,__CFError*&>
// address: 0x216414
// body: available
// range: 0x216414-0x21654f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21654b to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUErrorContainer* std::vector<ACFUErrorContainer, std::allocator<ACFUErrorContainer>
   >::__emplace_back_slow_path<std::string const&, long&, __CFError*&>(std::string const&, long&,
   __CFError*&) */

ACFUErrorContainer * __thiscall
std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>::
__emplace_back_slow_path<std::string_const&,long&,__CFError*&>
          (vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>> *this,string *param_1,
          long *param_2,__CFError **param_3)

{
  allocator *this_00;
  undefined8 uVar1;
  ACFUErrorContainer *pAVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ACFUErrorContainer *pAVar7;
  undefined1 auVar8 [16];
  long local_60;
  ACFUErrorContainer *local_58;
  ACFUErrorContainer *local_50;
  long local_48;
  allocator *local_40;
  string *local_38;
  
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar3 = lVar6 * -0x3333333333333333 + 1;
  if (uVar3 < 0x666666666666667) {
    this_00 = (allocator *)(this + 0x10);
    lVar5 = *(long *)this_00 - *(long *)this >> 3;
    uVar4 = lVar5 * -0x6666666666666666;
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    uVar4 = 0x666666666666666;
    if ((ulong)(lVar5 * -0x3333333333333333) < 0x333333333333333) {
      uVar4 = uVar3;
    }
    local_40 = this_00;
    if (uVar4 == 0) {
      auVar8 = ZEXT816(0);
    }
    else {
      local_38 = param_1;
      auVar8 = __allocate_at_least_abi_ne190102_<std::allocator<ACFUErrorContainer>>(this_00,uVar4);
      param_1 = local_38;
    }
    local_60 = auVar8._0_8_;
    local_58 = (ACFUErrorContainer *)(local_60 + lVar6 * 8);
    local_48 = local_60 + auVar8._8_8_ * 0x28;
    local_50 = local_58;
    allocator<ACFUErrorContainer>::
    construct_abi_ne190102_<ACFUErrorContainer,std::string_const&,long&,__CFError*&>
              ((allocator<ACFUErrorContainer> *)this_00,local_58,param_1,param_2,param_3);
    local_50 = local_50 + 0x28;
    pAVar7 = local_58 +
             ((long)*(ACFUErrorContainer **)this - (long)*(ACFUErrorContainer **)(this + 8));
    __uninitialized_allocator_relocate_abi_ne190102_<std::allocator<ACFUErrorContainer>,ACFUErrorContainer>
              (this_00,*(ACFUErrorContainer **)this,*(ACFUErrorContainer **)(this + 8),pAVar7);
    pAVar2 = local_50;
    local_60 = *(long *)this;
    *(ACFUErrorContainer **)this = pAVar7;
    *(ACFUErrorContainer **)(this + 8) = local_50;
    uVar1 = *(undefined8 *)(this + 0x10);
    *(long *)(this + 0x10) = local_48;
    local_58 = (ACFUErrorContainer *)local_60;
    local_50 = (ACFUErrorContainer *)local_60;
    local_48 = uVar1;
    __split_buffer<ACFUErrorContainer,std::allocator<ACFUErrorContainer>&>::~__split_buffer
              ((__split_buffer<ACFUErrorContainer,std::allocator<ACFUErrorContainer>&> *)&local_60);
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_();
}

