// rea decompile_all
// name: std::__uninitialized_allocator_relocate[abi:ne190102]<std::allocator<ACFUErrorContainer>,ACFUErrorContainer>
// address: 0x216632
// body: available
// range: 0x216632-0x2166b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__uninitialized_allocator_relocate[abi:ne190102]<std::allocator<ACFUErrorContainer>,
   ACFUErrorContainer>(std::allocator<ACFUErrorContainer>&, ACFUErrorContainer*,
   ACFUErrorContainer*, ACFUErrorContainer*) */

void std::
     __uninitialized_allocator_relocate_abi_ne190102_<std::allocator<ACFUErrorContainer>,ACFUErrorContainer>
               (allocator *param_1,ACFUErrorContainer *param_2,ACFUErrorContainer *param_3,
               ACFUErrorContainer *param_4)

{
  string *this;
  ACFUErrorContainer *pAVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != param_3) {
    lVar4 = 0;
    do {
      this = (string *)(param_4 + lVar4);
      if (((byte)param_2[lVar4] & 1) == 0) {
        pAVar1 = param_2 + lVar4;
        *(undefined8 *)(this + 0x10) = *(undefined8 *)(pAVar1 + 0x10);
        uVar2 = *(undefined8 *)(pAVar1 + 8);
        *(undefined8 *)this = *(undefined8 *)pAVar1;
        *(undefined8 *)(this + 8) = uVar2;
      }
      else {
        string::__init_copy_ctor_external
                  (this,*(char **)(param_2 + lVar4 + 0x10),*(ulong *)(param_2 + lVar4 + 8));
      }
      lVar3 = lVar4 + 0x28;
      uVar2 = *(undefined8 *)(param_2 + lVar4 + 0x20);
      *(undefined8 *)(param_4 + lVar4 + 0x18) = *(undefined8 *)(param_2 + lVar4 + 0x18);
      *(undefined8 *)(param_4 + lVar4 + 0x18 + 8) = uVar2;
      lVar4 = lVar4 + 0x28;
    } while (param_2 + lVar3 != param_3);
    for (; param_2 != param_3; param_2 = param_2 + 0x28) {
      ACFUErrorContainer::~ACFUErrorContainer(param_2);
    }
  }
  return;
}

