// rea decompile_all
// name: _AMRestoreModeDeviceConnectToPortInternal
// address: 0xca727
// body: available
// range: 0xca727-0xca88c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMRestoreModeDeviceConnectToPortInternal(__AMRestoreModeDevice*, unsigned short, double,
   unsigned long) */

uint _AMRestoreModeDeviceConnectToPortInternal
               (__AMRestoreModeDevice *param_1,ushort param_2,double param_3,ulong param_4)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_50;
  double local_48;
  uint local_34;
  
  if (param_3 <= 0.0) {
    if ((*(short *)(param_1 + 0x50) == 0x1298) || ((*(uint *)(param_1 + 0x94) & 0xfffffff0) == 0xf0)
       ) {
      param_3 = 100.0;
    }
    else {
      param_3 = 50.0;
    }
  }
  local_34 = 0xffffffff;
  local_48 = (double)_CFAbsoluteTimeGetCurrent();
  dVar5 = param_3 + local_48;
  local_50 = 0.1;
  bVar2 = false;
  uVar3 = param_4;
  do {
    if (bVar2) {
      dVar4 = (double)_CFAbsoluteTimeGetCurrent();
      if (dVar5 < dVar4) {
        return 0xffffffff;
      }
      dVar6 = local_48;
      if (dVar5 <= local_48) {
        dVar6 = dVar5;
      }
      if (dVar4 < dVar6) {
        _usleep((useconds_t)(long)((dVar6 - dVar4) * 1000000.0));
      }
    }
    iVar1 = _AMRestoreModeDeviceConnectToPortOneShot(param_1,param_2,uVar3,(int *)&local_34);
    if (iVar1 == 0x27) {
      if ((uVar3 & 0x10) != 0) {
        return 0xffffffff;
      }
      uVar3 = uVar3 | 0x10;
      iVar1 = _AMRestoreModeDeviceConnectToPortOneShot(param_1,param_2,uVar3,(int *)&local_34);
      if (iVar1 == 0x27) {
        return 0xffffffff;
      }
    }
    if ((param_4 & 4) != 0) break;
    local_48 = local_48 + local_50;
    dVar4 = local_50 + local_50;
    local_50 = 5.0;
    if (dVar4 <= 5.0) {
      local_50 = dVar4;
    }
    bVar2 = true;
  } while (iVar1 != 0);
  return -(uint)(iVar1 != 0) | local_34;
}

