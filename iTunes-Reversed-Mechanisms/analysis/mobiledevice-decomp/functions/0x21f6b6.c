// rea decompile_all
// name: ACFUFile::init
// address: 0x21f6b6
// body: available
// range: 0x21f6b6-0x21f75d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFile::init(__CFData const*) */

undefined8 __thiscall ACFUFile::init(ACFUFile *this,__CFData *param_1)

{
  long lVar1;
  long lVar2;
  unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *this_00;
  __CFData *p_Var3;
  unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *puVar4;
  ACFUDataContainer *pAVar5;
  ACFUDataContainer *local_30;
  
  if (*(long *)(this + 0x18) == 0) {
    init((__CFData *)this);
  }
  else if (param_1 == (__CFData *)0x0) {
    init((__CFData *)this);
  }
  else {
    lVar1 = _CFDataGetTypeID();
    p_Var3 = param_1;
    lVar2 = _CFGetTypeID();
    if (lVar1 == lVar2) {
      ACFUDataContainer::create((ACFUDataContainer *)&local_30,param_1);
      pAVar5 = local_30;
      this_00 = (unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *)(this + 8);
      local_30 = (ACFUDataContainer *)0x0;
      puVar4 = this_00;
      std::unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>>::reset_abi_ne190102_
                (this_00,pAVar5);
      pAVar5 = local_30;
      local_30 = (ACFUDataContainer *)0x0;
      if (pAVar5 != (ACFUDataContainer *)0x0) {
        ACFUDataContainer::~ACFUDataContainer(pAVar5);
        operator_delete(pAVar5);
        puVar4 = (unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *)pAVar5;
      }
      if (*(long *)this_00 != 0) {
        return 1;
      }
      init((__CFData *)puVar4);
    }
    else {
      init(p_Var3);
    }
  }
  return 0;
}

