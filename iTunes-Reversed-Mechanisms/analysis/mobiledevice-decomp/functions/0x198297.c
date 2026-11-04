// rea decompile_all
// name: _copyEntitlementsForPid
// address: 0x198297
// body: available
// range: 0x198297-0x19852a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copyEntitlementsForPid(ulong param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  char *pcVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_38;
  
  uVar11 = param_1 & 0xffffffff;
  local_38 = 0;
  iVar1 = _csops(param_1,7,&local_38,8);
  if (iVar1 != 0) {
    piVar2 = ___error();
    if (*piVar2 == 0x22) {
      piVar2 = _calloc(1,(ulong)(local_38._4_4_ >> 0x18 | (local_38._4_4_ & 0xff0000) >> 8 |
                                 (local_38._4_4_ & 0xff00) << 8 | local_38._4_4_ << 0x18));
      iVar1 = _csops(uVar11,7,piVar2,
                     local_38._4_4_ >> 0x18 | (local_38._4_4_ & 0xff0000) >> 8 |
                     (local_38._4_4_ & 0xff00) << 8 | local_38._4_4_ << 0x18);
      if (iVar1 == 0) {
        if (*piVar2 == 0x7171defa) {
          uVar9 = piVar2[1];
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          if (8 < uVar9) {
            iVar1 = uVar9 - 8;
            piVar2[1] = iVar1;
            lVar3 = _CFDataCreateWithBytesNoCopy
                              (0,piVar2 + 2,iVar1,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
            if (lVar3 != 0) {
              lVar6 = _CFPropertyListCreateWithData(0,lVar3,0,0,0);
              lVar12 = 0;
              if (lVar6 != 0) {
                lVar7 = _CFGetTypeID(lVar6);
                lVar8 = _CFDictionaryGetTypeID();
                lVar12 = lVar6;
                if (lVar7 != lVar8) {
                  _CFRelease(lVar6);
                  lVar12 = 0;
                }
              }
              _free(piVar2);
              _CFRelease(lVar3);
              return lVar12;
            }
          }
        }
        else {
          lVar3 = _getDefaultLogCtx();
          if ((lVar3 != 0) && (2 < *(int *)(lVar3 + 0x10))) {
            pcVar4 = _strrchr("/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
                              ,0x2f);
            pcVar10 = pcVar4 + 1;
            if (pcVar4 == (char *)0x0) {
              pcVar10 = 
              "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
              ;
            }
            _LogMsg(3,lVar3,pcVar10,0x101,"copyEntitlementsForPid",0,&cf_badmagic0x_08x,*piVar2);
          }
        }
      }
      else {
        lVar3 = _getDefaultLogCtx();
        if ((lVar3 != 0) && (2 < *(int *)(lVar3 + 0x10))) {
          pcVar4 = _strrchr("/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
                            ,0x2f);
          pcVar10 = pcVar4 + 1;
          if (pcVar4 == (char *)0x0) {
            pcVar10 = 
            "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
            ;
          }
          piVar5 = ___error();
          pcVar4 = _strerror(*piVar5);
          _LogMsg(3,lVar3,pcVar10,0xfc,"copyEntitlementsForPid",0,&cf_csops2__d___s,uVar11,pcVar4);
        }
        if (piVar2 == (int *)0x0) {
          return 0;
        }
      }
      _free(piVar2);
    }
    else {
      lVar3 = _getDefaultLogCtx();
      if ((lVar3 != 0) && (2 < *(int *)(lVar3 + 0x10))) {
        pcVar4 = _strrchr("/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
                          ,0x2f);
        pcVar10 = pcVar4 + 1;
        if (pcVar4 == (char *)0x0) {
          pcVar10 = 
          "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
          ;
        }
        piVar2 = ___error();
        pcVar4 = _strerror(*piVar2);
        _LogMsg(3,lVar3,pcVar10,0xf4,"copyEntitlementsForPid",0,&cf_csops1__d___s,uVar11,pcVar4);
        return 0;
      }
    }
  }
  return 0;
}

