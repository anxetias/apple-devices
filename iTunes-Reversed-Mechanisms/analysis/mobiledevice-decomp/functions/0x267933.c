// rea decompile_all
// name: ___AppendValue
// address: 0x267933
// body: available
// range: 0x267933-0x267acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong ___AppendValue(cfstringStruct *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  long local_40;
  undefined8 local_38;
  
  lVar2 = _CFGetTypeID();
  lVar3 = _CFStringGetTypeID();
  if (lVar2 == lVar3) {
    _CFRetain(param_1);
LAB_00267a11:
    if (param_1 == (cfstringStruct *)0x0) {
LAB_00267acb:
      uVar5 = 0;
      goto LAB_00267ab9;
    }
  }
  else {
    lVar3 = _CFNumberGetTypeID();
    if (lVar2 == lVar3) {
      cVar1 = _CFNumberIsFloatType(param_1);
      if (cVar1 == '\0') {
        cVar1 = _CFNumberGetValue(param_1,4,&local_38);
        if (cVar1 != '\0') {
          param_1 = (cfstringStruct *)_CFStringCreateWithFormat(0,0,&cf__qi,local_38);
          goto LAB_00267a11;
        }
      }
      else {
        cVar1 = _CFNumberGetValue(param_1,0xd,&local_38);
        if (cVar1 != '\0') {
          param_1 = (cfstringStruct *)_CFStringCreateWithFormat(local_38,0,0,&cf__g);
          goto LAB_00267a11;
        }
      }
      goto LAB_00267acb;
    }
    lVar3 = _CFBooleanGetTypeID();
    if (lVar2 != lVar3) {
      param_1 = (cfstringStruct *)_CFCopyDescription(param_1);
      goto LAB_00267a11;
    }
    bVar6 = *(cfstringStruct **)PTR__kCFBooleanTrue_00441110 == param_1;
    param_1 = &cf_0;
    if (bVar6) {
      param_1 = &cf_1;
    }
  }
  lVar2 = _CFStringGetLength(param_1);
  uVar5 = 0;
  lVar3 = _CFAllocatorAllocate(0,lVar2 * 9 + 1,0);
  if (lVar3 != 0) {
    local_40 = 0;
    lVar4 = _CFStringGetLength(param_1);
    lVar2 = _CFStringGetBytes(param_1,0,lVar4,0x8000100,0,0,lVar3,lVar2 * 9,&local_40);
    uVar5 = CONCAT71((int7)((ulong)lVar4 >> 8),lVar4 == lVar2);
    if (lVar4 == lVar2) {
      *(undefined1 *)(lVar3 + local_40) = 0;
      local_40 = local_40 + 1;
      _CFDataAppendBytes(param_2,lVar3);
    }
    _CFAllocatorDeallocate(0,lVar3);
  }
  _CFRelease(param_1);
LAB_00267ab9:
  return uVar5 & 0xffffffff;
}

