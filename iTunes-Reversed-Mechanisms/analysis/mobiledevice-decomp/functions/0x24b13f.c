// rea decompile_all
// name: RootCA::getRootKeyId
// address: 0x24b13f
// body: available
// range: 0x24b13f-0x24b2f6 inclusive
// range: 0x24b2fc-0x24b3c0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24b2f2 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24b3bc to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RootCA::getRootKeyId(RootCAId, SEChipType) */

RootCA * __thiscall RootCA::getRootKeyId(RootCA *this,int param_2,int param_3)

{
  SEException *pSVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  string local_88 [24];
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_38 [24];
  
  if (param_3 < 200) {
    if ((param_3 == 100) || (param_3 == 0x73)) {
LAB_0024b180:
      if (param_2 == 1) {
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        puVar4 = &getRootKeyId(RootCAId,SEChipType)::prodCA;
        puVar3 = &getRootKeyId(RootCAId,SEChipType)::localCA;
      }
      else {
        if (param_2 != 0) {
          pSVar1 = (SEException *)___cxa_allocate_exception(0x48);
          std::to_string((int)local_38);
          puVar2 = (undefined8 *)std::string::insert((ulong)local_38,(char *)0x0);
          local_98 = puVar2[2];
          local_a8 = *puVar2;
          uStack_a0 = puVar2[1];
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2 = (undefined8 *)std::string::append((char *)&local_a8);
          local_48 = puVar2[2];
          local_58 = *puVar2;
          uStack_50 = puVar2[1];
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          std::to_string((int)local_70);
          std::operator+[abi_ne190102_<char,std::char_traits<char>,std::allocator<char>>
                    (local_88,(string *)&local_58);
          SERestoreInfo::SEException::SEException
                    (pSVar1,local_88,0x10,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(pSVar1,&SERestoreInfo::SEException::typeinfo,
                       SERestoreInfo::SEException::~SEException);
        }
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        puVar4 = &getRootKeyId(RootCAId,SEChipType)::localCA;
        puVar3 = &getRootKeyId(RootCAId,SEChipType)::prodCA;
      }
      goto LAB_0024b1c9;
    }
  }
  else if ((param_3 == 0xd2) || (param_3 == 200)) goto LAB_0024b180;
  if (param_2 == 1) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    puVar4 = &getRootKeyId(RootCAId,SEChipType)::prodCA;
    puVar3 = (uchar *)&P73BaseManifestQueryResponseDerSpec::ManifestResponseSequenceTag;
  }
  else {
    if (param_2 != 0) {
      pSVar1 = (SEException *)___cxa_allocate_exception(0x48);
      std::to_string((int)local_38);
      puVar2 = (undefined8 *)std::string::insert((ulong)local_38,(char *)0x0);
      local_98 = puVar2[2];
      local_a8 = *puVar2;
      uStack_a0 = puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = (undefined8 *)std::string::append((char *)&local_a8);
      local_48 = puVar2[2];
      local_58 = *puVar2;
      uStack_50 = puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      std::to_string((int)local_70);
      std::operator+[abi_ne190102_<char,std::char_traits<char>,std::allocator<char>>
                (local_88,(string *)&local_58);
      SERestoreInfo::SEException::SEException
                (pSVar1,local_88,0x10,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pSVar1,&SERestoreInfo::SEException::typeinfo,
                   SERestoreInfo::SEException::~SEException);
    }
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    puVar4 = &getRootKeyId(RootCAId,SEChipType)::localCA;
    puVar3 = &getRootKeyId(RootCAId,SEChipType)::prodCA;
  }
LAB_0024b1c9:
  std::vector<unsigned_char,std::allocator<unsigned_char>>::
  __init_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)this,puVar4,puVar3,0x20);
  return this;
}

