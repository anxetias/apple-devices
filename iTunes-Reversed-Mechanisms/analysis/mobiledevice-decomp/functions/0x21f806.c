// rea decompile_all
// name: ACFUFile::init
// address: 0x21f806
// body: available
// range: 0x21f806-0x21f8db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFile::init(__CFString const*, bool) */

ulong __thiscall ACFUFile::init(ACFUFile *this,__CFString *param_1,bool param_2)

{
  ACFUDataContainer *in_RAX;
  __CFString *p_Var1;
  unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *this_00;
  ulong uVar2;
  bool bVar3;
  __CFString *p_Var4;
  unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *puVar5;
  ACFUDataContainer *pAVar6;
  ACFUDataContainer *local_38;
  
  if (param_1 == (__CFString *)0x0) {
    init((__CFData *)this);
  }
  else if (*(long *)(this + 0x18) == 0) {
    init((__CFString *)this,SUB81(param_1,0));
  }
  else {
    p_Var4 = *(__CFString **)PTR__kCFAllocatorDefault_004410e8;
    bVar3 = false;
    local_38 = in_RAX;
    p_Var1 = (__CFString *)_CFStringCreateWithFormat(p_Var4,0,&cf______,param_1);
    if (p_Var1 != (__CFString *)0x0) {
      ACFUDataContainer::create((ACFUDataContainer *)&local_38,p_Var1,param_2);
      pAVar6 = local_38;
      this_00 = (unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *)(this + 8);
      local_38 = (ACFUDataContainer *)0x0;
      puVar5 = this_00;
      std::unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>>::reset_abi_ne190102_
                (this_00,pAVar6);
      pAVar6 = local_38;
      local_38 = (ACFUDataContainer *)0x0;
      if (pAVar6 != (ACFUDataContainer *)0x0) {
        ACFUDataContainer::~ACFUDataContainer(pAVar6);
        operator_delete(pAVar6);
        puVar5 = (unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *)pAVar6;
      }
      uVar2 = CONCAT71((int7)((ulong)this_00 >> 8),*(long *)this_00 != 0);
      if (*(long *)this_00 == 0) {
        init((__CFData *)puVar5);
      }
      _CFRelease(p_Var1);
      goto LAB_0021f8ad;
    }
    init(p_Var4,bVar3);
  }
  uVar2 = 0;
LAB_0021f8ad:
  return uVar2 & 0xffffffff;
}

