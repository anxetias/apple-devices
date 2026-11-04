// rea decompile_all
// name: std::vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>::__emplace_back_slow_path<std::vector<unsigned_short,std::allocator<unsigned_short>>&>
// address: 0x2518a2
// body: available
// range: 0x2518a2-0x2519d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2519d4 to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::vector<unsigned short, std::allocator<unsigned short> >* std::vector<std::vector<unsigned
   short, std::allocator<unsigned short> >, std::allocator<std::vector<unsigned short,
   std::allocator<unsigned short> > > >::__emplace_back_slow_path<std::vector<unsigned short,
   std::allocator<unsigned short> >&>(std::vector<unsigned short, std::allocator<unsigned short> >&)
    */

vector * __thiscall
std::
vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
::__emplace_back_slow_path<std::vector<unsigned_short,std::allocator<unsigned_short>>&>
          (vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
           *this,vector *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  vector<unsigned_short,std::allocator<unsigned_short>> *pvVar6;
  vector<unsigned_short,std::allocator<unsigned_short>> *pvVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long local_50;
  vector<unsigned_short,std::allocator<unsigned_short>> *local_48;
  vector<unsigned_short,std::allocator<unsigned_short>> *local_40;
  long local_38;
  allocator *local_30;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar2 = lVar8 * -0x5555555555555555 + 1;
  if (uVar2 < 0xaaaaaaaaaaaaaab) {
    local_30 = (allocator *)(this + 0x10);
    lVar5 = *(long *)local_30 - *(long *)this >> 3;
    uVar4 = lVar5 * 0x5555555555555556;
    if (uVar2 < uVar4) {
      uVar2 = uVar4;
    }
    uVar4 = 0xaaaaaaaaaaaaaaa;
    if ((ulong)(lVar5 * -0x5555555555555555) < 0x555555555555555) {
      uVar4 = uVar2;
    }
    if (uVar4 == 0) {
      auVar9 = ZEXT816(0);
    }
    else {
      auVar9 = __allocate_at_least_abi_ne190102_<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
                         (local_30,uVar4);
    }
    local_50 = auVar9._0_8_;
    local_48 = (vector<unsigned_short,std::allocator<unsigned_short>> *)(local_50 + lVar8 * 8);
    local_38 = local_50 + auVar9._8_8_ * 0x18;
    *(undefined8 *)local_48 = 0;
    *(undefined8 *)(local_48 + 8) = 0;
    *(undefined8 *)(local_48 + 0x10) = 0;
    local_40 = local_48;
    vector<unsigned_short,std::allocator<unsigned_short>>::
    __init_with_size_abi_ne190102_<unsigned_short*,unsigned_short*>
              (local_48,*(ushort **)param_1,*(ushort **)(param_1 + 8),
               (long)*(ushort **)(param_1 + 8) - (long)*(ushort **)param_1 >> 1);
    pvVar7 = local_40 + 0x18;
    sVar3 = *(long *)(this + 8) - (long)*(void **)this;
    pvVar6 = local_48 + -sVar3;
    _memcpy(pvVar6,*(void **)this,sVar3);
    local_50 = *(long *)this;
    *(vector<unsigned_short,std::allocator<unsigned_short>> **)this = pvVar6;
    *(vector<unsigned_short,std::allocator<unsigned_short>> **)(this + 8) = pvVar7;
    uVar1 = *(undefined8 *)(this + 0x10);
    *(long *)(this + 0x10) = local_38;
    local_48 = (vector<unsigned_short,std::allocator<unsigned_short>> *)local_50;
    local_40 = (vector<unsigned_short,std::allocator<unsigned_short>> *)local_50;
    local_38 = uVar1;
    __split_buffer<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>&>
    ::~__split_buffer((__split_buffer<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>&>
                       *)&local_50);
    return (vector *)pvVar7;
  }
                    /* WARNING: Subroutine does not return */
  vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_();
}

