!/*-----------------------------------------------------------------*/
!/*! 
!  \file f90calceph.h
!  \brief fortran 77/90/95 binding interface
!         requires a fortran compiler with the standard fortran 77.
!
!  \author  M. Gastineau 
!           Astronomie et Systemes Dynamiques, IMCCE, CNRS, Observatoire de Paris. 
!
!   Copyright, 2008-2021, CNRS
!   email of the author : Mickael.Gastineau@obspm.fr
! 
!
!*/
!/*-----------------------------------------------------------------*/

!/*-----------------------------------------------------------------*/
!/* License  of this file :
!  This file is "triple-licensed", you have to choose one  of the three licenses 
!  below to apply on this file.
!  
!     CeCILL-C
!     	The CeCILL-C license is close to the GNU LGPL.
!     	( http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html )
!   
!  or CeCILL-B
!        The CeCILL-B license is close to the BSD.
!        (http://www.cecill.info/licences/Licence_CeCILL-B_V1-en.txt)
!  
!  or CeCILL v2.1
!       The CeCILL license is compatible with the GNU GPL.
!       ( http://www.cecill.info/licences/Licence_CeCILL_V2.1-en.html )
!  
! 
! This library is governed by the CeCILL-C, CeCILL-B or the CeCILL license under 
! French law and abiding by the rules of distribution of free software.  
! You can  use, modify and/ or redistribute the software under the terms 
! of the CeCILL-C,CeCILL-B or CeCILL license as circulated by CEA, CNRS and INRIA  
! at the following URL "http://www.cecill.info". 
!
! As a counterpart to the access to the source code and  rights to copy,
! modify and redistribute granted by the license, users are provided only
! with a limited warranty  and the software's author,  the holder of the
! economic rights,  and the successive licensors  have only  limited
! liability. 
!
! In this respect, the user's attention is drawn to the risks associated
! with loading,  using,  modifying and/or developing or reproducing the
! software by the user in light of its specific status of free software,
! that may mean  that it is complicated to manipulate,  and  that  also
! therefore means  that it is reserved for developers  and  experienced
! professionals having in-depth computer knowledge. Users are therefore
! encouraged to load and test the software's suitability as regards their
! requirements in conditions enabling the security of their systems and/or 
! data to be ensured and,  more generally, to use and operate it in the 
! same conditions as regards security. 
!
! The fact that you are presently reading this means that you have had
! knowledge of the CeCILL-C,CeCILL-B or CeCILL license and that you accept its terms.
! */
! /*-----------------------------------------------------------------*/

       external f90calceph_seterrorhandler

       integer f90calceph_sopen
       external f90calceph_sopen
       integer f90calceph_scompute
       external f90calceph_scompute       
       integer f90calceph_sgetconstant
       external f90calceph_sgetconstant    
       integer f90calceph_sgetconstantcount
       external f90calceph_sgetconstantcount    
       integer f90calceph_sgetconstantindex
       external f90calceph_sgetconstantindex    
       integer f90calceph_sgettimescale
       external f90calceph_sgettimescale    
       integer f90calceph_sgettimespan
       external f90calceph_sgettimespan    
       integer f90calceph_sgetfileversion
       external f90calceph_sgetfileversion    
       external f90calceph_sclose
       
       integer f90calceph_open
       external f90calceph_open
       integer f90calceph_open_array
       external f90calceph_open_array
       integer f90calceph_prefetch
       external f90calceph_prefetch
       integer f90calceph_isthreadsafe
       external f90calceph_isthreadsafe
       integer f90calceph_compute
       external f90calceph_compute       
       integer f90calceph_compute_order
       external f90calceph_compute_order   
       integer f90calceph_orient_order
       external f90calceph_orient_order    
       integer f90calceph_rotangmom_order
       external f90calceph_rotangmom_order    
       integer f90calceph_compute_unit
       external f90calceph_compute_unit    
       integer f90calceph_orient_unit
       external f90calceph_orient_unit    
       integer f90calceph_rotangmom_unit
       external f90calceph_rotangmom_unit    
       integer f90calceph_getconstant
       external f90calceph_getconstant    
       integer f90calceph_getconstantsd
       external f90calceph_getconstantsd    
       integer f90calceph_getconstantvd
       external f90calceph_getconstantvd    
       integer f90calceph_getconstantss
       external f90calceph_getconstantss    
       integer f90calceph_getconstantvs
       external f90calceph_getconstantvs    
       integer f90calceph_getconstantcount
       external f90calceph_getconstantcount    
       integer f90calceph_getconstantindex
       external f90calceph_getconstantindex   
       integer f90calceph_gettimescale
       external f90calceph_gettimescale    
       integer f90calceph_gettimespan
       external f90calceph_gettimespan  
       integer f90calceph_getpositionrecordcount
       external f90calceph_getpositionrecordcount   
       integer f90calceph_getpositionrecordindex
       external f90calceph_getpositionrecordindex   
       integer f90calceph_getpositionrecordindex2
       external f90calceph_getpositionrecordindex2   
       integer f90calceph_getorientrecordcount
       external f90calceph_getorientrecordcount   
       integer f90calceph_getorientrecordindex
       external f90calceph_getorientrecordindex 
       integer f90calceph_getorientrecordindex2
       external f90calceph_getorientrecordindex2 
       integer f90calceph_getmaxsupportedorder  
       external f90calceph_getmaxsupportedorder 
       integer f90calceph_getfileversion
       external f90calceph_getfileversion    
       external f90calceph_getversion_str 
       external f90calceph_close
       
! /*----------------------------------------------------------------------------------------------*/
! /* definition of the CALCEPH library version */
! /*----------------------------------------------------------------------------------------------*/
! version : major number of CALCEPH library
       integer CALCEPH_VERSION_MAJOR
       PARAMETER (CALCEPH_VERSION_MAJOR=3)
! version : minor number of CALCEPH library
       integer CALCEPH_VERSION_MINOR
       PARAMETER (CALCEPH_VERSION_MINOR=5)
!  version : patch number of CALCEPH library 
       integer CALCEPH_VERSION_PATCH
       PARAMETER (CALCEPH_VERSION_PATCH=1)
!  version : string of characters
       character(*) CALCEPH_VERSION_STRING
       parameter (CALCEPH_VERSION_STRING='3.5.1')

       
       integer CALCEPH_MAX_CONSTANTNAME
       PARAMETER (CALCEPH_MAX_CONSTANTNAME=33)
       integer CALCEPH_MAX_CONSTANTVALUE
       PARAMETER (CALCEPH_MAX_CONSTANTVALUE=1024)
       integer CALCEPH_ASTEROID
       PARAMETER (CALCEPH_ASTEROID=2000000)
       integer CALCEPH_UNIT_AU
       PARAMETER (CALCEPH_UNIT_AU=1)
       integer CALCEPH_UNIT_KM
       PARAMETER (CALCEPH_UNIT_KM=2)
       integer CALCEPH_UNIT_DAY
       PARAMETER (CALCEPH_UNIT_DAY=4)
       integer CALCEPH_UNIT_SEC
       PARAMETER (CALCEPH_UNIT_SEC=8)
       integer CALCEPH_UNIT_RAD
       PARAMETER (CALCEPH_UNIT_RAD=16)
       integer CALCEPH_USE_NAIFID
       PARAMETER (CALCEPH_USE_NAIFID=32)
       integer CALCEPH_OUTPUT_EULERANGLES
       PARAMETER (CALCEPH_OUTPUT_EULERANGLES=64)
       integer CALCEPH_OUTPUT_NUTATIONANGLES
       PARAMETER (CALCEPH_OUTPUT_NUTATIONANGLES=128)

!/* list of the known segment type for spice kernels and inpop/jpl original file format  */
!/* segment of the original DE/INPOP file format */
!/*! segment type for the original DE/INPOP file format */
       integer CALCEPH_SEGTYPE_ORIG_0   
       PARAMETER (CALCEPH_SEGTYPE_ORIG_0=0)
!/* segment of the spice kernels */
        integer CALCEPH_SEGTYPE_SPK_1  
        integer CALCEPH_SEGTYPE_SPK_2 
        integer CALCEPH_SEGTYPE_SPK_3   
        integer CALCEPH_SEGTYPE_SPK_5   
        integer CALCEPH_SEGTYPE_SPK_8   
        integer CALCEPH_SEGTYPE_SPK_9   
        integer CALCEPH_SEGTYPE_SPK_12  
        integer CALCEPH_SEGTYPE_SPK_13  
        integer CALCEPH_SEGTYPE_SPK_17  
        integer CALCEPH_SEGTYPE_SPK_18  
        integer CALCEPH_SEGTYPE_SPK_19  
        integer CALCEPH_SEGTYPE_SPK_20  
        integer CALCEPH_SEGTYPE_SPK_21  
        integer CALCEPH_SEGTYPE_SPK_102 
        integer CALCEPH_SEGTYPE_SPK_103 
        integer CALCEPH_SEGTYPE_SPK_120 
        PARAMETER (CALCEPH_SEGTYPE_SPK_1=1)  
        PARAMETER (CALCEPH_SEGTYPE_SPK_2=2)   
        PARAMETER (CALCEPH_SEGTYPE_SPK_3=3)   
        PARAMETER (CALCEPH_SEGTYPE_SPK_5=5)   
        PARAMETER (CALCEPH_SEGTYPE_SPK_8=8)   
        PARAMETER (CALCEPH_SEGTYPE_SPK_9=9)   
        PARAMETER (CALCEPH_SEGTYPE_SPK_12=12)  
        PARAMETER (CALCEPH_SEGTYPE_SPK_13=13)  
        PARAMETER (CALCEPH_SEGTYPE_SPK_17=17)  
        PARAMETER (CALCEPH_SEGTYPE_SPK_18=18)  
        PARAMETER (CALCEPH_SEGTYPE_SPK_19=19)  
        PARAMETER (CALCEPH_SEGTYPE_SPK_20=20)  
        PARAMETER (CALCEPH_SEGTYPE_SPK_21=21)  
        PARAMETER (CALCEPH_SEGTYPE_SPK_102=102) 
        PARAMETER (CALCEPH_SEGTYPE_SPK_103=103) 
        PARAMETER (CALCEPH_SEGTYPE_SPK_120=120) 
       

!/*! NAIF identification numbers for the Sun and planetary barycenters (table 2 of reference 1) */
       integer NAIFID_SOLAR_SYSTEM_BARYCENTER       
       integer NAIFID_MERCURY_BARYCENTER      
       integer NAIFID_VENUS_BARYCENTER        
       integer NAIFID_EARTH_MOON_BARYCENTER   
       integer NAIFID_MARS_BARYCENTER         
       integer NAIFID_JUPITER_BARYCENTER      
       integer NAIFID_SATURN_BARYCENTER       
       integer NAIFID_URANUS_BARYCENTER       
       integer NAIFID_NEPTUNE_BARYCENTER      
       integer NAIFID_PLUTO_BARYCENTER        
       integer NAIFID_SUN                   

!/*! NAIF identification numbers for the Coordinate Time ephemerides */
!/*! value to set as the center to get any Coordinate Time */
       integer NAIFID_TIME_CENTER 
!/*! value to set as the target to get the Coordinate Time TT-TDB */
       integer NAIFID_TIME_TTMTDB 
!/*! value to set as the target to get the Coordinate Time TCG-TCB */
       integer NAIFID_TIME_TCGMTCB 

!/*! NAIF identification numbers for the planet centers and satellites (table= 3 of reference= 1)  */
       integer NAIFID_MERCURY               
       integer NAIFID_VENUS           
       integer NAIFID_EARTH           
       integer NAIFID_MOON          
  
       integer NAIFID_MARS            
       integer NAIFID_PHOBOS             
       integer NAIFID_DEIMOS         
    
       integer NAIFID_JUPITER         
       integer NAIFID_IO                 
       integer NAIFID_EUROPA             
       integer NAIFID_GANYMEDE           
       integer NAIFID_CALLISTO           
       integer NAIFID_AMALTHEA           
       integer NAIFID_HIMALIA            
       integer NAIFID_ELARA              
       integer NAIFID_PASIPHAE           
       integer NAIFID_SINOPE             
       integer NAIFID_LYSITHEA           
       integer NAIFID_CARME              
       integer NAIFID_ANANKE             
       integer NAIFID_LEDA               
       integer NAIFID_THEBE              
       integer NAIFID_ADRASTEA           
       integer NAIFID_METIS              
       integer NAIFID_CALLIRRHOE         
       integer NAIFID_THEMISTO           
       integer NAIFID_MEGACLITE          
       integer NAIFID_TAYGETE            
       integer NAIFID_CHALDENE           
       integer NAIFID_HARPALYKE          
       integer NAIFID_KALYKE             
       integer NAIFID_IOCASTE            
       integer NAIFID_ERINOME            
       integer NAIFID_ISONOE             
       integer NAIFID_PRAXIDIKE          
       integer NAIFID_AUTONOE            
       integer NAIFID_THYONE             
       integer NAIFID_HERMIPPE           
       integer NAIFID_AITNE              
       integer NAIFID_EURYDOME           
       integer NAIFID_EUANTHE            
       integer NAIFID_EUPORIE            
       integer NAIFID_ORTHOSIE           
       integer NAIFID_SPONDE             
       integer NAIFID_KALE               
       integer NAIFID_PASITHEE           
       integer NAIFID_HEGEMONE        
       integer NAIFID_MNEME           
       integer NAIFID_AOEDE           
       integer NAIFID_THELXINOE       
       integer NAIFID_ARCHE           
       integer NAIFID_KALLICHORE      
       integer NAIFID_HELIKE          
       integer NAIFID_CARPO           
       integer NAIFID_EUKELADE        
       integer NAIFID_CYLLENE         
       integer NAIFID_KORE            
       integer NAIFID_HERSE          
       integer NAIFID_DIA
 
       integer NAIFID_SATURN          
       integer NAIFID_MIMAS              
       integer NAIFID_ENCELADUS          
       integer NAIFID_TETHYS             
       integer NAIFID_DIONE              
       integer NAIFID_RHEA               
       integer NAIFID_TITAN              
       integer NAIFID_HYPERION           
       integer NAIFID_IAPETUS            
       integer NAIFID_PHOEBE             
       integer NAIFID_JANUS              
       integer NAIFID_EPIMETHEUS         
       integer NAIFID_HELENE             
       integer NAIFID_TELESTO            
       integer NAIFID_CALYPSO            
       integer NAIFID_ATLAS              
       integer NAIFID_PROMETHEUS         
       integer NAIFID_PANDORA            
       integer NAIFID_PAN                
       integer NAIFID_YMIR               
       integer NAIFID_PAALIAQ            
       integer NAIFID_TARVOS             
       integer NAIFID_IJIRAQ             
       integer NAIFID_SUTTUNGR           
       integer NAIFID_KIVIUQ             
       integer NAIFID_MUNDILFARI         
       integer NAIFID_ALBIORIX           
       integer NAIFID_SKATHI            
       integer NAIFID_ERRIAPUS          
       integer NAIFID_SIARNAQ           
       integer NAIFID_THRYMR            
       integer NAIFID_NARVI             
       integer NAIFID_METHONE           
       integer NAIFID_PALLENE           
       integer NAIFID_POLYDEUCES        
       integer NAIFID_DAPHNIS         
       integer NAIFID_AEGIR           
       integer NAIFID_BEBHIONN        
       integer NAIFID_BERGELMIR       
       integer NAIFID_BESTLA          
       integer NAIFID_FARBAUTI        
       integer NAIFID_FENRIR          
       integer NAIFID_FORNJOT         
       integer NAIFID_HATI            
       integer NAIFID_HYROKKIN        
       integer NAIFID_KARI            
       integer NAIFID_LOGE            
       integer NAIFID_SKOLL           
       integer NAIFID_SURTUR          
       integer NAIFID_ANTHE           
       integer NAIFID_JARNSAXA        
       integer NAIFID_GREIP           
       integer NAIFID_TARQEQ          
       integer NAIFID_AEGAEON         

       integer NAIFID_URANUS          
       integer NAIFID_ARIEL              
       integer NAIFID_UMBRIEL            
       integer NAIFID_TITANIA            
       integer NAIFID_OBERON             
       integer NAIFID_MIRANDA            
       integer NAIFID_CORDELIA           
       integer NAIFID_OPHELIA            
       integer NAIFID_BIANCA             
       integer NAIFID_CRESSIDA           
       integer NAIFID_DESDEMONA          
       integer NAIFID_JULIET             
       integer NAIFID_PORTIA             
       integer NAIFID_ROSALIND           
       integer NAIFID_BELINDA            
       integer NAIFID_PUCK               
       integer NAIFID_CALIBAN            
       integer NAIFID_SYCORAX            
       integer NAIFID_PROSPERO           
       integer NAIFID_SETEBOS            
       integer NAIFID_STEPHANO           
       integer NAIFID_TRINCULO           
       integer NAIFID_FRANCISCO       
       integer NAIFID_MARGARET        
       integer NAIFID_FERDINAND       
       integer NAIFID_PERDITA         
       integer NAIFID_MAB             
       integer NAIFID_CUPID          
 
       integer NAIFID_NEPTUNE         
       integer NAIFID_TRITON             
       integer NAIFID_NEREID             
       integer NAIFID_NAIAD              
       integer NAIFID_THALASSA           
       integer NAIFID_DESPINA            
       integer NAIFID_GALATEA            
       integer NAIFID_LARISSA            
       integer NAIFID_PROTEUS            
       integer NAIFID_HALIMEDE        
       integer NAIFID_PSAMATHE        
       integer NAIFID_SAO             
       integer NAIFID_LAOMEDEIA       
       integer NAIFID_NESO            

       integer NAIFID_PLUTO           
       integer NAIFID_CHARON             
       integer NAIFID_NIX             
       integer NAIFID_HYDRA           
       integer NAIFID_KERBEROS
       integer NAIFID_STYX

!/*! NAIF identification numbers for the comets (table= 4 of reference= 1)  */
       integer NAIFID_AREND                  
       integer NAIFID_AREND_RIGAUX           
       integer NAIFID_ASHBROOK_JACKSON       
       integer NAIFID_BOETHIN                
       integer NAIFID_BORRELLY               
       integer NAIFID_BOWELL_SKIFF           
       integer NAIFID_BRADFIELD              
       integer NAIFID_BROOKS_2               
       integer NAIFID_BRORSEN_METCALF        
       integer NAIFID_BUS                    
       integer NAIFID_CHERNYKH               
       integer NAIFID_CHURYUMOV_GERASIMENKO  
       integer NAIFID_CIFFREO                
       integer NAIFID_CLARK                  
       integer NAIFID_COMAS_SOLA             
       integer NAIFID_CROMMELIN              
       integer NAIFID_D__ARREST              
       integer NAIFID_DANIEL                 
       integer NAIFID_DE_VICO_SWIFT          
       integer NAIFID_DENNING_FUJIKAWA       
       integer NAIFID_DU_TOIT_1              
       integer NAIFID_DU_TOIT_HARTLEY        
       integer NAIFID_DUTOIT_NEUJMIN_DELPORTE
       integer NAIFID_DUBIAGO                
       integer NAIFID_ENCKE                  
       integer NAIFID_FAYE                   
       integer NAIFID_FINLAY                 
       integer NAIFID_FORBES                 
       integer NAIFID_GEHRELS_1              
       integer NAIFID_GEHRELS_2              
       integer NAIFID_GEHRELS_3              
       integer NAIFID_GIACOBINI_ZINNER       
       integer NAIFID_GICLAS                 
       integer NAIFID_GRIGG_SKJELLERUP       
       integer NAIFID_GUNN                   
       integer NAIFID_HALLEY                 
       integer NAIFID_HANEDA_CAMPOS          
       integer NAIFID_HARRINGTON             
       integer NAIFID_HARRINGTON_ABELL       
       integer NAIFID_HARTLEY_1              
       integer NAIFID_HARTLEY_2              
       integer NAIFID_HARTLEY_IRAS           
       integer NAIFID_HERSCHEL_RIGOLLET      
       integer NAIFID_HOLMES                 
       integer NAIFID_HONDA_MRKOS_PAJDUSAKOVA
       integer NAIFID_HOWELL                 
       integer NAIFID_IRAS                   
       integer NAIFID_JACKSON_NEUJMIN        
       integer NAIFID_JOHNSON                
       integer NAIFID_KEARNS_KWEE            
       integer NAIFID_KLEMOLA                
       integer NAIFID_KOHOUTEK               
       integer NAIFID_KOJIMA                 
       integer NAIFID_KOPFF                  
       integer NAIFID_KOWAL_1                
       integer NAIFID_KOWAL_2                
       integer NAIFID_KOWAL_MRKOS            
       integer NAIFID_KOWAL_VAVROVA          
       integer NAIFID_LONGMORE               
       integer NAIFID_LOVAS_1                
       integer NAIFID_MACHHOLZ               
       integer NAIFID_MAURY                  
       integer NAIFID_NEUJMIN_1              
       integer NAIFID_NEUJMIN_2              
       integer NAIFID_NEUJMIN_3              
       integer NAIFID_OLBERS                 
       integer NAIFID_PETERS_HARTLEY         
       integer NAIFID_PONS_BROOKS            
       integer NAIFID_PONS_WINNECKE          
       integer NAIFID_REINMUTH_1             
       integer NAIFID_REINMUTH_2             
       integer NAIFID_RUSSELL_1              
       integer NAIFID_RUSSELL_2              
       integer NAIFID_RUSSELL_3              
       integer NAIFID_RUSSELL_4              
       integer NAIFID_SANGUIN                
       integer NAIFID_SCHAUMASSE             
       integer NAIFID_SCHUSTER               
       integer NAIFID_SCHWASSMANN_WACHMANN_1 
       integer NAIFID_SCHWASSMANN_WACHMANN_2 
       integer NAIFID_SCHWASSMANN_WACHMANN_3 
       integer NAIFID_SHAJN_SCHALDACH        
       integer NAIFID_SHOEMAKER_1            
       integer NAIFID_SHOEMAKER_2            
       integer NAIFID_SHOEMAKER_3            
       integer NAIFID_SINGER_BREWSTER        
       integer NAIFID_SLAUGHTER_BURNHAM      
       integer NAIFID_SMIRNOVA_CHERNYKH      
       integer NAIFID_STEPHAN_OTERMA         
       integer NAIFID_SWIFT_GEHRELS          
       integer NAIFID_TAKAMIZAWA             
       integer NAIFID_TAYLOR                 
       integer NAIFID_TEMPEL_1               
       integer NAIFID_TEMPEL_2               
       integer NAIFID_TEMPEL_TUTTLE          
       integer NAIFID_TRITTON                
       integer NAIFID_TSUCHINSHAN_1          
       integer NAIFID_TSUCHINSHAN_2          
       integer NAIFID_TUTTLE                 
       integer NAIFID_TUTTLE_GIACOBINI_KRESAK
       integer NAIFID_VAISALA_1              
       integer NAIFID_VAN_BIESBROECK         
       integer NAIFID_VAN_HOUTEN             
       integer NAIFID_WEST_KOHOUTEK_IKEMURA  
       integer NAIFID_WHIPPLE                
       integer NAIFID_WILD_1                 
       integer NAIFID_WILD_2                 
       integer NAIFID_WILD_3                 
       integer NAIFID_WIRTANEN               
       integer NAIFID_WOLF                   
       integer NAIFID_WOLF_HARRINGTON        
       integer NAIFID_LOVAS_2                
       integer NAIFID_URATA_NIIJIMA          
       integer NAIFID_WISEMAN_SKIFF          
       integer NAIFID_HELIN                  
       integer NAIFID_MUELLER                
       integer NAIFID_SHOEMAKER_HOLT_1       
       integer NAIFID_HELIN_ROMAN_CROCKETT   
       integer NAIFID_HARTLEY_3              
       integer NAIFID_PARKER_HARTLEY         
       integer NAIFID_HELIN_ROMAN_ALU_1      
       integer NAIFID_WILD_4                 
       integer NAIFID_MUELLER_2              
       integer NAIFID_MUELLER_3              
       integer NAIFID_SHOEMAKER_LEVY_1       
       integer NAIFID_SHOEMAKER_LEVY_2       
       integer NAIFID_HOLT_OLMSTEAD          
       integer NAIFID_METCALF_BREWINGTON     
       integer NAIFID_LEVY                   
       integer NAIFID_SHOEMAKER_LEVY_9       
       integer NAIFID_HYAKUTAKE              
       integer NAIFID_HALE_BOPP  
       integer NAIFID_SIDING_SPRING            


!/*! NAIF identification numbers for the Sun and planetary barycenters (table 2 of reference 1) */
       PARAMETER ( NAIFID_SOLAR_SYSTEM_BARYCENTER= 0  )
       PARAMETER ( NAIFID_MERCURY_BARYCENTER     = 1  )
       PARAMETER ( NAIFID_VENUS_BARYCENTER       = 2  )
       PARAMETER ( NAIFID_EARTH_MOON_BARYCENTER  = 3  )
       PARAMETER ( NAIFID_MARS_BARYCENTER        = 4  )
       PARAMETER ( NAIFID_JUPITER_BARYCENTER     = 5  )
       PARAMETER ( NAIFID_SATURN_BARYCENTER      = 6  )
       PARAMETER ( NAIFID_URANUS_BARYCENTER      = 7  )
       PARAMETER ( NAIFID_NEPTUNE_BARYCENTER     = 8  )
       PARAMETER ( NAIFID_PLUTO_BARYCENTER       = 9  )
       PARAMETER ( NAIFID_SUN                   = 10 )

!/*! NAIF identification numbers for the Coordinate Time ephemerides */
!/*! value to set as the center to get any Coordinate Time */
       PARAMETER ( NAIFID_TIME_CENTER = 1000000000 )       
!/*! value to set as the target to get the Coordinate Time TT-TDB */
       PARAMETER ( NAIFID_TIME_TTMTDB = 1000000001)        
!/*! value to set as the target to get the Coordinate Time TCG-TCB */
       PARAMETER ( NAIFID_TIME_TCGMTCB = 1000000002 ) 

!/*! NAIF identification numbers for the planet centers and satellites (table= 3 of reference= 1)  */
       PARAMETER ( NAIFID_MERCURY       = 199  )
       PARAMETER ( NAIFID_VENUS         = 299  )
       PARAMETER ( NAIFID_EARTH         = 399  )
       PARAMETER ( NAIFID_MOON          = 301  )

       PARAMETER ( NAIFID_MARS          = 499  )
       PARAMETER ( NAIFID_PHOBOS        = 401  )
       PARAMETER ( NAIFID_DEIMOS        = 402  )

       PARAMETER ( NAIFID_JUPITER       = 599  )
       PARAMETER ( NAIFID_IO            = 501  )
       PARAMETER ( NAIFID_EUROPA        = 502  )
       PARAMETER ( NAIFID_GANYMEDE      = 503  )
       PARAMETER ( NAIFID_CALLISTO      = 504  )
       PARAMETER ( NAIFID_AMALTHEA      = 505  )
       PARAMETER ( NAIFID_HIMALIA       = 506  )
       PARAMETER ( NAIFID_ELARA         = 507  )
       PARAMETER ( NAIFID_PASIPHAE      = 508  )
       PARAMETER ( NAIFID_SINOPE        = 509  )
       PARAMETER ( NAIFID_LYSITHEA      = 510  )
       PARAMETER ( NAIFID_CARME         = 511  )
       PARAMETER ( NAIFID_ANANKE        = 512  )
       PARAMETER ( NAIFID_LEDA          = 513  )
       PARAMETER ( NAIFID_THEBE         = 514  )
       PARAMETER ( NAIFID_ADRASTEA      = 515  )
       PARAMETER ( NAIFID_METIS         = 516  )
       PARAMETER ( NAIFID_CALLIRRHOE    = 517  )
       PARAMETER ( NAIFID_THEMISTO      = 518  )
       PARAMETER ( NAIFID_MEGACLITE     = 519  )
       PARAMETER ( NAIFID_TAYGETE       = 520  )
       PARAMETER ( NAIFID_CHALDENE      = 521  )
       PARAMETER ( NAIFID_HARPALYKE     = 522  )
       PARAMETER ( NAIFID_KALYKE        = 523  )
       PARAMETER ( NAIFID_IOCASTE       = 524  )
       PARAMETER ( NAIFID_ERINOME       = 525  )
       PARAMETER ( NAIFID_ISONOE        = 526  )
       PARAMETER ( NAIFID_PRAXIDIKE     = 527  )
       PARAMETER ( NAIFID_AUTONOE       = 528  )
       PARAMETER ( NAIFID_THYONE        = 529  )
       PARAMETER ( NAIFID_HERMIPPE      = 530  )
       PARAMETER ( NAIFID_AITNE         = 531  )
       PARAMETER ( NAIFID_EURYDOME      = 532  )
       PARAMETER ( NAIFID_EUANTHE       = 533  )
       PARAMETER ( NAIFID_EUPORIE       = 534  )
       PARAMETER ( NAIFID_ORTHOSIE      = 535  )
       PARAMETER ( NAIFID_SPONDE        = 536  )
       PARAMETER ( NAIFID_KALE          = 537  )
       PARAMETER ( NAIFID_PASITHEE      = 538  )
       PARAMETER ( NAIFID_HEGEMONE      = 539  )
       PARAMETER ( NAIFID_MNEME         = 540  )
       PARAMETER ( NAIFID_AOEDE         = 541  )
       PARAMETER ( NAIFID_THELXINOE     = 542  )
       PARAMETER ( NAIFID_ARCHE         = 543  )
       PARAMETER ( NAIFID_KALLICHORE    = 544  )
       PARAMETER ( NAIFID_HELIKE        = 545  )
       PARAMETER ( NAIFID_CARPO         = 546  )
       PARAMETER ( NAIFID_EUKELADE      = 547  )
       PARAMETER ( NAIFID_CYLLENE       = 548  )
       PARAMETER ( NAIFID_KORE          = 549  )
       PARAMETER ( NAIFID_HERSE         = 550  )
       PARAMETER ( NAIFID_DIA           = 553  )

       PARAMETER ( NAIFID_SATURN        = 699  )
       PARAMETER ( NAIFID_MIMAS         = 601  )
       PARAMETER ( NAIFID_ENCELADUS     = 602  )
       PARAMETER ( NAIFID_TETHYS        = 603  )
       PARAMETER ( NAIFID_DIONE         = 604  )
       PARAMETER ( NAIFID_RHEA          = 605  )
       PARAMETER ( NAIFID_TITAN         = 606  )
       PARAMETER ( NAIFID_HYPERION      = 607  )
       PARAMETER ( NAIFID_IAPETUS       = 608  )
       PARAMETER ( NAIFID_PHOEBE        = 609  )
       PARAMETER ( NAIFID_JANUS         = 610  )
       PARAMETER ( NAIFID_EPIMETHEUS    = 611  )
       PARAMETER ( NAIFID_HELENE        = 612  )
       PARAMETER ( NAIFID_TELESTO       = 613  )
       PARAMETER ( NAIFID_CALYPSO       = 614  )
       PARAMETER ( NAIFID_ATLAS         = 615  )
       PARAMETER ( NAIFID_PROMETHEUS    = 616  )
       PARAMETER ( NAIFID_PANDORA       = 617  )
       PARAMETER ( NAIFID_PAN           = 618  )
       PARAMETER ( NAIFID_YMIR          = 619  )
       PARAMETER ( NAIFID_PAALIAQ       = 620  )
       PARAMETER ( NAIFID_TARVOS        = 621  )
       PARAMETER ( NAIFID_IJIRAQ        = 622  )
       PARAMETER ( NAIFID_SUTTUNGR      = 623  )
       PARAMETER ( NAIFID_KIVIUQ        = 624  )
       PARAMETER ( NAIFID_MUNDILFARI    = 625  )
       PARAMETER ( NAIFID_ALBIORIX      = 626  )
       PARAMETER ( NAIFID_SKATHI        = 627  )
       PARAMETER ( NAIFID_ERRIAPUS      = 628  )
       PARAMETER ( NAIFID_SIARNAQ       = 629  )
       PARAMETER ( NAIFID_THRYMR        = 630  )
       PARAMETER ( NAIFID_NARVI         = 631  )
       PARAMETER ( NAIFID_METHONE       = 632  )
       PARAMETER ( NAIFID_PALLENE       = 633  )
       PARAMETER ( NAIFID_POLYDEUCES    = 634  )
       PARAMETER ( NAIFID_DAPHNIS       = 635  )
       PARAMETER ( NAIFID_AEGIR         = 636  )
       PARAMETER ( NAIFID_BEBHIONN      = 637  )
       PARAMETER ( NAIFID_BERGELMIR     = 638  )
       PARAMETER ( NAIFID_BESTLA        = 639  )
       PARAMETER ( NAIFID_FARBAUTI      = 640  )
       PARAMETER ( NAIFID_FENRIR        = 641  )
       PARAMETER ( NAIFID_FORNJOT       = 642  )
       PARAMETER ( NAIFID_HATI          = 643  )
       PARAMETER ( NAIFID_HYROKKIN      = 644  )
       PARAMETER ( NAIFID_KARI          = 645  )
       PARAMETER ( NAIFID_LOGE          = 646  )
       PARAMETER ( NAIFID_SKOLL         = 647  )
       PARAMETER ( NAIFID_SURTUR        = 648  )
       PARAMETER ( NAIFID_ANTHE         = 649  )
       PARAMETER ( NAIFID_JARNSAXA      = 650  )
       PARAMETER ( NAIFID_GREIP         = 651  )
       PARAMETER ( NAIFID_TARQEQ        = 652  )
       PARAMETER ( NAIFID_AEGAEON       = 653  )

       PARAMETER ( NAIFID_URANUS        = 799  )
       PARAMETER ( NAIFID_ARIEL         = 701  )
       PARAMETER ( NAIFID_UMBRIEL       = 702  )
       PARAMETER ( NAIFID_TITANIA       = 703  )
       PARAMETER ( NAIFID_OBERON        = 704  )
       PARAMETER ( NAIFID_MIRANDA       = 705  )
       PARAMETER ( NAIFID_CORDELIA      = 706  )
       PARAMETER ( NAIFID_OPHELIA       = 707  )
       PARAMETER ( NAIFID_BIANCA        = 708  )
       PARAMETER ( NAIFID_CRESSIDA      = 709  )
       PARAMETER ( NAIFID_DESDEMONA     = 710  )
       PARAMETER ( NAIFID_JULIET        = 711  )
       PARAMETER ( NAIFID_PORTIA        = 712  )
       PARAMETER ( NAIFID_ROSALIND      = 713  )
       PARAMETER ( NAIFID_BELINDA       = 714  )
       PARAMETER ( NAIFID_PUCK          = 715  )
       PARAMETER ( NAIFID_CALIBAN       = 716  )
       PARAMETER ( NAIFID_SYCORAX       = 717  )
       PARAMETER ( NAIFID_PROSPERO      = 718  )
       PARAMETER ( NAIFID_SETEBOS       = 719  )
       PARAMETER ( NAIFID_STEPHANO      = 720  )
       PARAMETER ( NAIFID_TRINCULO      = 721  )
       PARAMETER ( NAIFID_FRANCISCO     = 722  )
       PARAMETER ( NAIFID_MARGARET      = 723  )
       PARAMETER ( NAIFID_FERDINAND     = 724  )
       PARAMETER ( NAIFID_PERDITA       = 725  )
       PARAMETER ( NAIFID_MAB           = 726  )
       PARAMETER ( NAIFID_CUPID         = 727  )
 
       PARAMETER ( NAIFID_NEPTUNE       = 899  )
       PARAMETER ( NAIFID_TRITON        = 801  )
       PARAMETER ( NAIFID_NEREID        = 802  )
       PARAMETER ( NAIFID_NAIAD         = 803  )
       PARAMETER ( NAIFID_THALASSA      = 804  )
       PARAMETER ( NAIFID_DESPINA       = 805  )
       PARAMETER ( NAIFID_GALATEA       = 806  )
       PARAMETER ( NAIFID_LARISSA       = 807  )
       PARAMETER ( NAIFID_PROTEUS       = 808  )
       PARAMETER ( NAIFID_HALIMEDE      = 809  )
       PARAMETER ( NAIFID_PSAMATHE      = 810  )
       PARAMETER ( NAIFID_SAO           = 811  )
       PARAMETER ( NAIFID_LAOMEDEIA     = 812  )
       PARAMETER ( NAIFID_NESO          = 813  )

       PARAMETER ( NAIFID_PLUTO         = 999  )
       PARAMETER ( NAIFID_CHARON        = 901  )
       PARAMETER ( NAIFID_NIX           = 902  )
       PARAMETER ( NAIFID_HYDRA         = 903  )
       PARAMETER ( NAIFID_KERBEROS      = 904  )
       PARAMETER ( NAIFID_STYX          = 905  )

!/*! NAIF identification numbers for the comets (table= 4 of reference= 1)  */)
       PARAMETER ( NAIFID_AREND                  = 1000001)
       PARAMETER ( NAIFID_AREND_RIGAUX           = 1000002)
       PARAMETER ( NAIFID_ASHBROOK_JACKSON       = 1000003)
       PARAMETER ( NAIFID_BOETHIN                = 1000004)
       PARAMETER ( NAIFID_BORRELLY               = 1000005)
       PARAMETER ( NAIFID_BOWELL_SKIFF           = 1000006)
       PARAMETER ( NAIFID_BRADFIELD              = 1000007)
       PARAMETER ( NAIFID_BROOKS_2               = 1000008)
       PARAMETER ( NAIFID_BRORSEN_METCALF        = 1000009)
       PARAMETER ( NAIFID_BUS                    = 1000010)
       PARAMETER ( NAIFID_CHERNYKH               = 1000011)
       PARAMETER ( NAIFID_CHURYUMOV_GERASIMENKO  = 1000012)
       PARAMETER ( NAIFID_CIFFREO                = 1000013)
       PARAMETER ( NAIFID_CLARK                  = 1000014)
       PARAMETER ( NAIFID_COMAS_SOLA             = 1000015)
       PARAMETER ( NAIFID_CROMMELIN              = 1000016)
       PARAMETER ( NAIFID_D__ARREST              = 1000017)
       PARAMETER ( NAIFID_DANIEL                 = 1000018)
       PARAMETER ( NAIFID_DE_VICO_SWIFT          = 1000019)
       PARAMETER ( NAIFID_DENNING_FUJIKAWA       = 1000020)
       PARAMETER ( NAIFID_DU_TOIT_1              = 1000021)
       PARAMETER ( NAIFID_DU_TOIT_HARTLEY        = 1000022)
       PARAMETER ( NAIFID_DUTOIT_NEUJMIN_DELPORTE= 1000023)
       PARAMETER ( NAIFID_DUBIAGO                = 1000024)
       PARAMETER ( NAIFID_ENCKE                  = 1000025)
       PARAMETER ( NAIFID_FAYE                   = 1000026)
       PARAMETER ( NAIFID_FINLAY                 = 1000027)
       PARAMETER ( NAIFID_FORBES                 = 1000028)
       PARAMETER ( NAIFID_GEHRELS_1              = 1000029)
       PARAMETER ( NAIFID_GEHRELS_2              = 1000030)
       PARAMETER ( NAIFID_GEHRELS_3              = 1000031)
       PARAMETER ( NAIFID_GIACOBINI_ZINNER       = 1000032)
       PARAMETER ( NAIFID_GICLAS                 = 1000033)
       PARAMETER ( NAIFID_GRIGG_SKJELLERUP       = 1000034)
       PARAMETER ( NAIFID_GUNN                   = 1000035)
       PARAMETER ( NAIFID_HALLEY                 = 1000036)
       PARAMETER ( NAIFID_HANEDA_CAMPOS          = 1000037)
       PARAMETER ( NAIFID_HARRINGTON             = 1000038)
       PARAMETER ( NAIFID_HARRINGTON_ABELL       = 1000039)
       PARAMETER ( NAIFID_HARTLEY_1              = 1000040)
       PARAMETER ( NAIFID_HARTLEY_2              = 1000041)
       PARAMETER ( NAIFID_HARTLEY_IRAS           = 1000042)
       PARAMETER ( NAIFID_HERSCHEL_RIGOLLET      = 1000043)
       PARAMETER ( NAIFID_HOLMES                 = 1000044)
       PARAMETER ( NAIFID_HONDA_MRKOS_PAJDUSAKOVA= 1000045)
       PARAMETER ( NAIFID_HOWELL                 = 1000046)
       PARAMETER ( NAIFID_IRAS                   = 1000047)
       PARAMETER ( NAIFID_JACKSON_NEUJMIN        = 1000048)
       PARAMETER ( NAIFID_JOHNSON                = 1000049)
       PARAMETER ( NAIFID_KEARNS_KWEE            = 1000050)
       PARAMETER ( NAIFID_KLEMOLA                = 1000051)
       PARAMETER ( NAIFID_KOHOUTEK               = 1000052)
       PARAMETER ( NAIFID_KOJIMA                 = 1000053)
       PARAMETER ( NAIFID_KOPFF                  = 1000054)
       PARAMETER ( NAIFID_KOWAL_1                = 1000055)
       PARAMETER ( NAIFID_KOWAL_2                = 1000056)
       PARAMETER ( NAIFID_KOWAL_MRKOS            = 1000057)
       PARAMETER ( NAIFID_KOWAL_VAVROVA          = 1000058)
       PARAMETER ( NAIFID_LONGMORE               = 1000059)
       PARAMETER ( NAIFID_LOVAS_1                = 1000060)
       PARAMETER ( NAIFID_MACHHOLZ               = 1000061)
       PARAMETER ( NAIFID_MAURY                  = 1000062)
       PARAMETER ( NAIFID_NEUJMIN_1              = 1000063)
       PARAMETER ( NAIFID_NEUJMIN_2              = 1000064)
       PARAMETER ( NAIFID_NEUJMIN_3              = 1000065)
       PARAMETER ( NAIFID_OLBERS                 = 1000066)
       PARAMETER ( NAIFID_PETERS_HARTLEY         = 1000067)
       PARAMETER ( NAIFID_PONS_BROOKS            = 1000068)
       PARAMETER ( NAIFID_PONS_WINNECKE          = 1000069)
       PARAMETER ( NAIFID_REINMUTH_1             = 1000070)
       PARAMETER ( NAIFID_REINMUTH_2             = 1000071)
       PARAMETER ( NAIFID_RUSSELL_1              = 1000072)
       PARAMETER ( NAIFID_RUSSELL_2              = 1000073)
       PARAMETER ( NAIFID_RUSSELL_3              = 1000074)
       PARAMETER ( NAIFID_RUSSELL_4              = 1000075)
       PARAMETER ( NAIFID_SANGUIN                = 1000076)
       PARAMETER ( NAIFID_SCHAUMASSE             = 1000077)
       PARAMETER ( NAIFID_SCHUSTER               = 1000078)
       PARAMETER ( NAIFID_SCHWASSMANN_WACHMANN_1 = 1000079)
       PARAMETER ( NAIFID_SCHWASSMANN_WACHMANN_2 = 1000080)
       PARAMETER ( NAIFID_SCHWASSMANN_WACHMANN_3 = 1000081)
       PARAMETER ( NAIFID_SHAJN_SCHALDACH        = 1000082)
       PARAMETER ( NAIFID_SHOEMAKER_1            = 1000083)
       PARAMETER ( NAIFID_SHOEMAKER_2            = 1000084)
       PARAMETER ( NAIFID_SHOEMAKER_3            = 1000085)
       PARAMETER ( NAIFID_SINGER_BREWSTER        = 1000086)
       PARAMETER ( NAIFID_SLAUGHTER_BURNHAM      = 1000087)
       PARAMETER ( NAIFID_SMIRNOVA_CHERNYKH      = 1000088)
       PARAMETER ( NAIFID_STEPHAN_OTERMA         = 1000089)
       PARAMETER ( NAIFID_SWIFT_GEHRELS          = 1000090)
       PARAMETER ( NAIFID_TAKAMIZAWA             = 1000091)
       PARAMETER ( NAIFID_TAYLOR                 = 1000092)
       PARAMETER ( NAIFID_TEMPEL_1               = 1000093)
       PARAMETER ( NAIFID_TEMPEL_2               = 1000094)
       PARAMETER ( NAIFID_TEMPEL_TUTTLE          = 1000095)
       PARAMETER ( NAIFID_TRITTON                = 1000096)
       PARAMETER ( NAIFID_TSUCHINSHAN_1          = 1000097)
       PARAMETER ( NAIFID_TSUCHINSHAN_2          = 1000098)
       PARAMETER ( NAIFID_TUTTLE                 = 1000099)
       PARAMETER ( NAIFID_TUTTLE_GIACOBINI_KRESAK= 1000100)
       PARAMETER ( NAIFID_VAISALA_1              = 1000101)
       PARAMETER ( NAIFID_VAN_BIESBROECK         = 1000102)
       PARAMETER ( NAIFID_VAN_HOUTEN             = 1000103)
       PARAMETER ( NAIFID_WEST_KOHOUTEK_IKEMURA  = 1000104)
       PARAMETER ( NAIFID_WHIPPLE                = 1000105)
       PARAMETER ( NAIFID_WILD_1                 = 1000106)
       PARAMETER ( NAIFID_WILD_2                 = 1000107)
       PARAMETER ( NAIFID_WILD_3                 = 1000108)
       PARAMETER ( NAIFID_WIRTANEN               = 1000109)
       PARAMETER ( NAIFID_WOLF                   = 1000110)
       PARAMETER ( NAIFID_WOLF_HARRINGTON        = 1000111)
       PARAMETER ( NAIFID_LOVAS_2                = 1000112)
       PARAMETER ( NAIFID_URATA_NIIJIMA          = 1000113)
       PARAMETER ( NAIFID_WISEMAN_SKIFF          = 1000114)
       PARAMETER ( NAIFID_HELIN                  = 1000115)
       PARAMETER ( NAIFID_MUELLER                = 1000116)
       PARAMETER ( NAIFID_SHOEMAKER_HOLT_1       = 1000117)
       PARAMETER ( NAIFID_HELIN_ROMAN_CROCKETT   = 1000118)
       PARAMETER ( NAIFID_HARTLEY_3              = 1000119)
       PARAMETER ( NAIFID_PARKER_HARTLEY         = 1000120)
       PARAMETER ( NAIFID_HELIN_ROMAN_ALU_1      = 1000121)
       PARAMETER ( NAIFID_WILD_4                 = 1000122)
       PARAMETER ( NAIFID_MUELLER_2              = 1000123)
       PARAMETER ( NAIFID_MUELLER_3              = 1000124)
       PARAMETER ( NAIFID_SHOEMAKER_LEVY_1       = 1000125)
       PARAMETER ( NAIFID_SHOEMAKER_LEVY_2       = 1000126)
       PARAMETER ( NAIFID_HOLT_OLMSTEAD          = 1000127)
       PARAMETER ( NAIFID_METCALF_BREWINGTON     = 1000128)
       PARAMETER ( NAIFID_LEVY                   = 1000129)
       PARAMETER ( NAIFID_SHOEMAKER_LEVY_9       = 1000130)
       PARAMETER ( NAIFID_HYAKUTAKE              = 1000131)
       PARAMETER ( NAIFID_HALE_BOPP              = 1000132)
       PARAMETER ( NAIFID_SIDING_SPRING          = 1003228)



