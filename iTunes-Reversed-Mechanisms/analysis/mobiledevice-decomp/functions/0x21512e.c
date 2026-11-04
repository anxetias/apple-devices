// rea decompile_all
// name: ACFURestoreHost::createNum64Num32FromData
// address: 0x21512e
// body: available
// range: 0x21512e-0x2151dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::createNum64Num32FromData(__CFData const*, __CFNumber const**) */

bool ACFURestoreHost::createNum64Num32FromData(__CFData *param_1,__CFNumber **param_2)

{
  __CFData *p_Var1;
  void *pvVar2;
  __CFNumber *p_Var3;
  __CFNumber **pp_Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_38;
  undefined4 local_2c;
  
  pp_Var4 = param_2;
  p_Var1 = (__CFData *)_CFDataGetLength();
  pvVar2 = (void *)_CFDataGetBytePtr(param_1);
  if ((__CFData *)((long)&MACH_HEADER.cputype + 3) < p_Var1 + -1) {
    createNum64Num32FromData(p_Var1,pp_Var4);
  }
  else {
    if (p_Var1 < (__CFData *)((long)&MACH_HEADER.cputype + 1)) {
      puVar7 = (undefined8 *)&local_2c;
      local_2c = 0;
      _memcpy(puVar7,pvVar2,(size_t)p_Var1);
      uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar5 = 3;
    }
    else {
      puVar7 = &local_38;
      local_38 = 0;
      _memcpy(puVar7,pvVar2,(size_t)p_Var1);
      uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar5 = 4;
    }
    p_Var3 = (__CFNumber *)_CFNumberCreate(uVar6,uVar5,puVar7);
    *param_2 = p_Var3;
  }
  return p_Var1 + -1 < &MACH_HEADER.cpusubtype;
}

