INTERFACE
 SUBROUTINE LAYERAVG(LDGRADPS,PX1,PX2,PY2,KN1,KN2,KI,PZ,PZS,PZPS)
 USE PARKIND1 ,ONLY : JPIM ,JPRB
 LOGICAL, INTENT(in) :: LDGRADPS
 INTEGER(KIND=JPIM), INTENT(in) :: KN1,KN2,KI
 REAL(KIND=JPRB), INTENT(in) :: PX1(KN1),PX2(KN2),PY2(KN2),PZS(KN2)
 REAL(KIND=JPRB), INTENT(inout) :: PZ(KN2),PZPS
 END SUBROUTINE LAYERAVG
END INTERFACE
