// rea decompile_all
// name: ACFUCommon::cfTypeDescription
// address: 0x22035a
// body: available
// range: 0x22035a-0x220465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUCommon::cfTypeDescription(unsigned long, bool) */

ACFUCommon * __thiscall ACFUCommon::cfTypeDescription(ACFUCommon *this,ulong param_1,bool param_2)

{
  __CFString *p_Var1;
  __CFString *p_Var2;
  undefined8 uVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  p_Var1 = (__CFString *)_CFCopyTypeIDDescription(param_1);
  if (p_Var1 == (__CFString *)0x0) {
    uVar3 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar3,2,"%s::%s: failed to copy type description for type ID %lu\n","ACFUCommon",
               "cfTypeDescription",param_1);
    return this;
  }
  if (param_2) {
    p_Var2 = (__CFString *)
             _CFStringCreateWithFormat
                       (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf_____lu_,p_Var1,
                        param_1);
    if (p_Var2 == (__CFString *)0x0) {
      uVar3 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar3,2,"%s::%s: failed to create full description for type ID %lu\n","ACFUCommon",
                 "cfTypeDescription",param_1);
      goto LAB_00220420;
    }
  }
  else {
    _CFRetain(p_Var1);
    p_Var2 = p_Var1;
  }
  stringFromCFString((ACFUCommon *)&local_40,p_Var2);
  *(undefined8 *)(this + 0x10) = local_30;
  *(undefined4 *)this = local_40;
  *(undefined4 *)(this + 4) = uStack_3c;
  *(undefined4 *)(this + 8) = uStack_38;
  *(undefined4 *)(this + 0xc) = uStack_34;
  _CFRelease(p_Var2);
LAB_00220420:
  _CFRelease(p_Var1);
  return this;
}

