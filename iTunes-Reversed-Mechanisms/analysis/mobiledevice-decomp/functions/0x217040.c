// rea decompile_all
// name: ACFULogging::handleMessageCFType
// address: 0x217040
// body: available
// range: 0x217040-0x21718c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFULogging::handleMessageCFType(std::string const&, ACFULogLevel, char const*, void const*) */

void __thiscall
ACFULogging::handleMessageCFType
          (ACFULogging *this,byte *param_1,undefined4 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  __CFString *p_Var3;
  char *pcVar4;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *local_58;
  ACFULogging *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  char *local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (char *)0x0;
  cVar2 = shouldLog(this,param_3);
  if (cVar2 == '\0') {
    return;
  }
  local_50 = this + 8;
  std::mutex::lock();
  if (param_5 == 0) {
    pcVar4 = "%s::%s: CFType to be printed is NULL\n";
  }
  else {
    if ((*param_1 & 1) == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = *(byte **)(param_1 + 0x10);
    }
    p_Var3 = (__CFString *)
             _CFStringCreateWithFormat
                       (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf__s__s__,param_1,
                        param_4,param_5);
    if (p_Var3 != (__CFString *)0x0) {
      ACFUCommon::stringFromCFString((ACFUCommon *)&local_68,p_Var3);
      local_38 = local_58;
      local_48 = CONCAT44(uStack_64,local_68);
      uVar1 = local_48;
      uStack_40 = CONCAT44(uStack_5c,uStack_60);
      local_48._0_1_ = (char)local_68;
      if ((local_68 & 1) == 0) {
        local_58 = "UNDEF";
        if ((char)local_48 != '\0') {
          local_58 = (char *)((long)&local_48 + 1);
        }
      }
      else if (uStack_40 == 0) {
        local_58 = "UNDEF";
      }
      local_48 = uVar1;
      handleMessageInternal(this,param_3,"%s",local_58);
      _CFRelease(p_Var3);
      goto LAB_00217137;
    }
    pcVar4 = "%s::%s: failed to format CFString\n";
  }
  handleMessageInternal(this,2,pcVar4,"ACFULogging","handleMessageCFType");
LAB_00217137:
  std::mutex::unlock();
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  return;
}

