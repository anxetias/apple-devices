// rea decompile_all
// name: _AMDeviceProxyIsStashbagRequired
// address: 0x10a7f9
// body: available
// range: 0x10a7f9-0x10a89c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMDeviceProxyIsStashbagRequired(AMDeviceProxy*) */

ulong _AMDeviceProxyIsStashbagRequired(AMDeviceProxy *param_1)

{
  char cVar1;
  int iVar2;
  _AMDevice *p_Var3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *in_R8;
  cfstringStruct *pcVar7;
  ulong uVar8;
  
  if (param_1 == (AMDeviceProxy *)0x0) {
    pcVar7 = &cf__AMDeviceProxyIsStashbagRequired_proxyisNULL;
  }
  else {
    iVar2 = __AMDeviceProxyGetState(param_1);
    if (iVar2 == 4) {
      p_Var3 = (_AMDevice *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
      pcVar7 = (cfstringStruct *)0x0;
      lVar4 = _AMDeviceProxyCopyLockdownValueWithError
                        (p_Var3,(__CFString *)0x0,(__CFString *)&cf_HasSiDP,false,in_R8);
      if (lVar4 != 0) {
        lVar5 = _CFGetTypeID(lVar4);
        lVar6 = _CFBooleanGetTypeID();
        if (lVar5 == lVar6) {
          cVar1 = _CFBooleanGetValue(lVar4);
          uVar8 = CONCAT71((int7)((ulong)lVar4 >> 8),cVar1 != '\0');
        }
        else {
          uVar8 = 0;
        }
        pcVar7 = (cfstringStruct *)0x0;
        goto LAB_0010a87f;
      }
    }
    else {
      pcVar7 = &
               cf__AMDeviceProxyIsStashbagRequired_CanonlycheckforrequiredstashbagifdeviceisbootedtoOS
      ;
    }
  }
  uVar8 = 0;
LAB_0010a87f:
  AMDeviceProxy::LogAndRelease(param_1,5,(__CFString *)pcVar7);
  return uVar8 & 0xffffffff;
}

