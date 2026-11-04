// rea decompile_all
// name: __AMDRemotePairingSupportedOnHost
// address: 0x16cc53
// body: available
// range: 0x16cc53-0x16ce8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMDRemotePairingSupportedOnHost(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  bool bVar7;
  
  if (_RemoteServiceDiscoveryLibrary_sOnce != -1) {
    _dispatch_once(&_RemoteServiceDiscoveryLibrary_sOnce,&___block_literal_global_254);
  }
  if (_RemoteServiceDiscoveryLibrary_sLib == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "RemoteServiceDiscovery.framework is not available.";
  }
  else {
    if (_MercuryLibrary_sOnce != -1) {
      _dispatch_once(&_MercuryLibrary_sOnce,&___block_literal_global_256);
    }
    if (_MercuryLibrary_sLib != 0) {
      iVar3 = ___isPlatformVersionAtLeast(1,0xd,0,0);
      iVar4 = ___isPlatformVersionAtLeast(1,0xb,3,1);
      if (iVar4 == 0) {
        if (iVar3 != 0) goto LAB_0016cd80;
      }
      else {
        bVar7 = iVar3 != 0;
        iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),bVar7);
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&cf_com_apple_MobileDevice,"UTF8String");
        cVar2 = _os_variant_allows_internal_security_policies(uVar5);
        if (cVar2 != '\0' || bVar7) {
LAB_0016cd80:
          if (_RemotePairingLibrary_sOnce_4256 != -1) {
            _dispatch_once(&_RemotePairingLibrary_sOnce_4256,&___block_literal_global_252);
          }
          uVar5 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
          if (_RemotePairingLibrary_sLib_4257 != 0) goto LAB_0016cdcb;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar6 = "RemotePairing.framework is not available.";
          goto LAB_0016cdbd;
        }
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar5 = 0;
      __os_log_internal(0,_md_log_log,2,"RemotePairing requires at least macOS %s.",
                        "11.3.1 on Intel");
      goto LAB_0016cdcb;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "Mercury.framework is not available.";
  }
LAB_0016cdbd:
  uVar5 = 0;
  __os_log_internal(0,_md_log_log,2,pcVar6);
LAB_0016cdcb:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(0);
  (*(code *)puVar1)(0);
  return uVar5;
}

